#include <Wire.h>//I2C通信のライブラリ
#include <Adafruit_PWMServoDriver.h>//16chPWMドライバーのライブラリ

/*マルチスレッド用のライブラリ*/
#include "freertos/task.h"
#include "soc/timer_group_struct.h"
#include "soc/timer_group_reg.h"

void feedTheDog(){//マルチスレッド用の設定
  TIMERG0.wdt_wprotect=TIMG_WDT_WKEY_VALUE;
  TIMERG0.wdt_feed=1;
  TIMERG0.wdt_wprotect=0;

  TIMERG1.wdt_wprotect=TIMG_WDT_WKEY_VALUE;
  TIMERG1.wdt_feed=1;
  TIMERG1.wdt_wprotect=0;
}


void Task0(void* param);//マルチタスク用スレッド

//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

/*PWMドライバーの宣言*/
Adafruit_PWMServoDriver pwms[] ={ Adafruit_PWMServoDriver(0x42),
                                    Adafruit_PWMServoDriver(0x43),
                                    Adafruit_PWMServoDriver(0x44),
                                    Adafruit_PWMServoDriver(0x45)
                                  };
//int b_num[]={1,1,1,1,0,0,0,0,0,1,0,0,0,1,1,1};//board num
//int p_num[]={5,4,3,6,6,7,5,2,1,0,4,3,0,7,1,2};//port num

//int coms[]=  {4,5,6,7};
//int coms2[]=  {8,9,10,11};
//int coms3[]=  {0,1,2,3};
// void ResetPins(int num);
// void ActuatePin(int b,int p);
void SetPWMs(){
  Wire.begin(26,32);//26:SDA,32:SCL
  Wire.setClock(150000);
  
  for(int i=0;i<sizeof(pwms) / sizeof(Adafruit_PWMServoDriver);i++){
    pwms[i].begin();
    pwms[i].setOscillatorFrequency(27000000);
    pwms[i].setPWMFreq(1000);
    for(int j=0;j<16;j++){
      pwms[i].setPWM(j,0,0);
    }
  }
}
int flag=-1;//モード変更用のフラグ
// int t_act[]={30,25,20,15,10};
// int t_rest[]={30,25,20,15,10};
int t_act[]={400000,100000,50000,20000,10000};//マイクロ秒
int t_rest[]={400000,100000,50000,20000,10000};
int sp_mo[]={1024,2048,3072,4095};
int mode[]={1,2};//1:モータが1方向に回転するモード、2:モータが交互に両方向に回転するモード
int tmpp=1024;
String currentMode = "a";

void setup() {
  Serial.begin(115200);
  xTaskCreatePinnedToCore(Task0,"Task0",4096,NULL,1,NULL,0);//マルチタスク初期設定
  SetPWMs();
}

void loop() {
  if(flag==0){
    ResetPins(0);
    flag=-1;
  }
  else if(flag>=1 && flag<=9){
    if(currentMode == "a"){
      for(int j=0;j<8;j++){
        unsigned long startTime = micros();
        // ActuateRow(j);
        ets_delay_us(t_act[flag-1]);
        // ResetPins(0);
        ets_delay_us(t_rest[flag-1]);
        unsigned long deltaTime = micros() - startTime;
        Serial.println(deltaTime);
      }
    }
    else if(currentMode == "b"){
      for(int j=0;j<8;j++){
        unsigned long startTime = micros();
        ActuateRow(j);
        ets_delay_us(t_act[flag-1]);
        ResetPins(0);
        ets_delay_us(t_rest[flag-1]);
        unsigned long deltaTime = micros() - startTime;
        Serial.println(deltaTime);

        // unsigned long startTime = micros();
        // ActuatePinAlternative(0,j,1);
        // ResetPins(0);
        // ets_delay_us(t_rest[flag-1]);
        // unsigned long deltaTime = micros() - startTime;
        // Serial.println(deltaTime);
      }
    }
    //flag=-1;    
  }
}

//b: PWM driver ID
//p: motor ID
void ActuatePin(int b,int p){
  // int tmpp=1024;//最大4096
  pwms[b].setPWM(2*p,0,tmpp);//指定モーター端子Aに電圧印加
  pwms[b].setPWM(2*p+1,0,0);//指定モーター端子Bは0V
}

void ActuatePinReverse(int b, int p){
  pwms[b].setPWM(2 * p, 0, 0);        // 指定モーター端子Aは0V
  pwms[b].setPWM(2 * p + 1, 0, tmpp); // 指定モーター端子Bに電圧印加
}

void ActuateRow(int row){
    ActuatePin(0,row);
    ActuatePin(1,row);
    ActuatePin(2,row);
    ActuatePin(3,row);
}

void ActuateRowReverse(int row){
    ActuatePinReverse(0,row);
    ActuatePinReverse(1,row);
    ActuatePinReverse(2,row);
    ActuatePinReverse(3,row);
}

void ActuatePinAlternative(int b,int p,int pulsesInSingleDrive){//pulsesInSingleDrive:正転逆転を繰り返す回数
  for(int i=0;i<=pulsesInSingleDrive/2;i++){
    ActuateRow(p);
    ets_delay_us(t_act[flag-1]/pulsesInSingleDrive/2);
    ActuateRowReverse(p);
    ets_delay_us(t_act[flag-1]/pulsesInSingleDrive/2);
  }
}

void ResetPins(int num){
  for(int i=0;i<sizeof(pwms) / sizeof(Adafruit_PWMServoDriver);i++){
    for(int j=0;j<8;j++){
      pwms[i].setPWM(2*j,0,0);
      pwms[i].setPWM(2*j+1,0,0);
    }
  }
}

void Task0(void* param){//マルチタスク用スレット
  while(1){
    if(Serial.available()>0){//シリアル通信でコマンド取得(0-4)
      char val=Serial.read();
      val=val-48;
      Serial.println(int(val));

      if(0<=val && val<=5){//val:0 to 5, 0:reset, 1-5:period
        flag=(int)val;//コマンド格納
        //Serial.println(flag);
      }
      else if(6<=val && val<=9){//val:6 to 9
        tmpp=sp_mo[(int)(val-6)];
        //Serial.println(tmpp);
      }
      else if(val==49){//"a"
        currentMode = "a";
        Serial.println("currentMode : one way");
      }
      else if(val==50){//"b"
        currentMode = "b";
        Serial.println("currentMode : altenate");
      }
    }
    feedTheDog();
  }

}
