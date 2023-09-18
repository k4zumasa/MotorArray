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
void ResetPins(int num);
void ActuatePin(int b,int p);
void SetPWMs(){
  Wire.begin(26,32);//26:SDA,32:SCL
  Wire.setClock(100000);
  
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
int t_act[]={30,25,20,15,10};
int t_rest[]={30,25,20,15,10};
int sp_mo[]={1024,2048,3072,4095};//5Vがmax, USB pdのmaxに依る
int tmpp=1024;
int freq=200;
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
  else if(flag>=1){
    
    for(int j=0;j<8;j++){
      ActuatePin(0,j);
      ActuatePin(1,j);
      ActuatePin(2,j);
      ActuatePin(3,j);
      delay(t_act[flag-1]);
      ResetPins(0);
      delay(t_rest[flag-1]);
    }
        
    //flag=-1;    
  } 
}

//b: PWM driver ID
//p: motor ID
void ActuatePin(int b,int p){
  //int tmpp=1024;//最大4096
  pwms[b].setPWM(2*p,0,tmpp);//指定モーター端子Aに電圧印加
  pwms[b].setPWM(2*p+1,0,0);//指定モーター端子Bは0V
}

// void ActuatePin(int b, int p){
//   int T = 1 / freq * 1000;//周期[ms]
//   pwms[b].setPWM(2*p,0,tmpp);//指定モーター端子Aに電圧印加
//   pwms[b].setPWM(2*p+1,0,0);//指定モーター端子Bは0V
//   delay(T);
//   pwms[b].setPWM(2*p,0,0);//指定モーター端子Aは0V
//   pwms[b].setPWM(2*p+1,0,tmpp);//指定モーター端子Bに電圧印加
//   delay(T);
// }

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
      if(val>=0 && val<=5){//val:0 to 5, 0:reset, 1-5:period
        flag=(int)val;//コマンド格納
        //Serial.println(flag);
      }
      else if(val<=9){//val:6 to 9
        tmpp=sp_mo[(int)(val-6)];
        //Serial.println(tmpp);
      }
    }
    feedTheDog();
  }
}
