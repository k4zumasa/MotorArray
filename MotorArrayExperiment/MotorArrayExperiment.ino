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
int t_act[]={400000,100000,50000,20000,10000};//マイクロ秒
int t_rest[]={400000,100000,50000,20000,10000};
int sp_mo[]={1024,2048,3072,4095};
int flagToRow[] = {0,0,0,0,0,3,2,1,0};
int flagToColumn[] = {0,0,1,2,3};
int mode[]={1,2};//1:モータが1方向に回転するモード、2:モータが交互に両方向に回転するモード
int tmpp=1024;
String currentMode = "ex1";

// unsigned long startTime = micros();
// unsigned long deltaTime = micros() - startTime;
// Serial.println(deltaTime);

void setup() {
  Serial.begin(115200);
  xTaskCreatePinnedToCore(Task0,"Task0",4096,NULL,1,NULL,0);//マルチタスク初期設定
  SetPWMs();
}

void loop() {
  if(flag==9){
    ResetPins(0);
    flag=-1;
  } 
  if(currentMode == "ex1"){
    if(flag>=1 && flag<=4){
      ActuateColumn(flagToColumn[flag]);
      ets_delay_us(800000);
      ResetPins(0);
      flag=-1;
    }
    else if(flag>=5 && flag<=8){
      ActuateRow(flagToRow[flag]);
      ets_delay_us(800000);
      ResetPins(0);
      flag=-1;
    }
  }

  else if(currentMode == "ex2"){
    ActuateWave(flag);
  }
  
}

//b: PWM driver ID
//p: motor ID
void ActuatePin(int b,int p){//b:column, p:row
  // int tmpp=1024;//最大4096
  pwms[b].setPWM(2*p,0,tmpp);//指定モーター端子Aに電圧印加
  pwms[b].setPWM(2*p+1,0,0);//指定モーター端子Bは0V
}

void ActuateRow(int row){
  ActuatePin(0,row);
  ActuatePin(1,row);
  ActuatePin(2,row);
  ActuatePin(3,row);
}

void ActuateColumn(int column){
  ActuatePin(column,0);
  ActuatePin(column,1);
  ActuatePin(column,2);
  ActuatePin(column,3);
}

void ActuateWave(int direction){
  if(direction == 1){
    ActuateRow(0);
    ets_delay_us(100000);
    ResetRow(0);
    ActuateRow(1);
    ets_delay_us(100000);
    ResetRow(1);
    ActuateRow(2);
    ets_delay_us(100000);
    ResetRow(2);
    ActuateRow(3);
    ets_delay_us(100000);
    ResetRow(3);
    flag = -1;
  }
  else if (direction == 2){
    ActuateRow(3);
    ets_delay_us(100000);
    ResetRow(3);
    ActuateRow(2);
    ets_delay_us(100000);
    ResetRow(2);
    ActuateRow(1);
    ets_delay_us(100000);
    ResetRow(1);
    ActuateRow(0);
    ets_delay_us(100000);
    ResetRow(0);
    flag = -1;
  }
  else if (direction == 3){
    ActuateColumn(3);
    ets_delay_us(100000);
    ResetColumn(3);
    ActuateColumn(2);
    ets_delay_us(100000);
    ResetColumn(2);
    ActuateColumn(1);
    ets_delay_us(100000);
    ResetColumn(1);
    ActuateColumn(0);
    ets_delay_us(100000);
    ResetColumn(0);
    flag = -1;
  }
  else if (direction == 4){
    ActuateColumn(0);
    ets_delay_us(100000);
    ResetColumn(0);
    ActuateColumn(1);
    ets_delay_us(100000);
    ResetColumn(1);
    ActuateColumn(2);
    ets_delay_us(100000);
    ResetColumn(2);
    ActuateColumn(3);
    ets_delay_us(100000);
    ResetColumn(3);
    flag = -1;
  }
}

void ResetPin(int b, int p){
  pwms[b].setPWM(2*p,0,0);
  pwms[b].setPWM(2*p+1,0,0);
}

void ResetPins(int num){
  for(int i=0;i<sizeof(pwms) / sizeof(Adafruit_PWMServoDriver);i++){
    for(int j=0;j<8;j++){
      pwms[i].setPWM(2*j,0,0);
      pwms[i].setPWM(2*j+1,0,0);
    }
  }
}

void ResetRow(int num){
  for(int i=0; i<=3; i++){
    ResetPin(0,num);
    ResetPin(1,num);
    ResetPin(2,num);
    ResetPin(3,num);
  }
}

void ResetColumn(int num){
  for(int i=5; i<=8; i++){
    ResetPin(num,0);
    ResetPin(num,1);
    ResetPin(num,2);
    ResetPin(num,3);
  }
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

void ActuatePinReverse(int b, int p){
  pwms[b].setPWM(2 * p, 0, 0);        // 指定モーター端子Aは0V
  pwms[b].setPWM(2 * p + 1, 0, tmpp); // 指定モーター端子Bに電圧印加
}

void Task0(void* param){//マルチタスク用スレット
  while(1){
    if(Serial.available()>0){//シリアル通信でコマンド取得(0-4)
      char val=Serial.read();
      val=val-48;
      Serial.println(int(val));
      if(0<=val && val<=9){//val:0 to 5, 0:reset, 1-4:row, 5-8:column
        flag=(int)val;//コマンド格納
      }
      // else if(6<=val && val<=9){//val:6 to 9
      //   tmpp=sp_mo[(int)(val-6)];
      //   //Serial.println(tmpp);
      // }
      else if(val==49){//"a"
        currentMode = "ex1";
        Serial.println("experiment1 started.");
      }
      else if(val==50){//"b"
        currentMode = "ex2";
        Serial.println("experiment2 started.");
      }
    }
    feedTheDog();
  }

}
