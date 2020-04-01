#include "mbed.h"
//#include "uLCD_4DGL.h"
//uLCD_4DGL uLCD(D1, D0, D2);

PwmOut PWM1(D6);
AnalogIn Ain(A0);
AnalogOut Aout(DAC0_OUT);
Serial pc( USBTX, USBRX );
float ADCdata[128];

int main(){
     /*Q1
      uLCD.printf("\n106060012\n"); //Default Green on black text
      uLCD.line(0, 0 , 0, 10, 0xFFFFFF);
      uLCD.line(0, 0 , 10, 0, 0xFFFFFF);
      uLCD.line(10, 10 , 0, 10, 0xFFFFFF);
      uLCD.line(10, 10 , 10, 0, 0xFFFFFF);
      wait(30);
    */
 
    PWM1.period(0.001);
    PWM1 = 0.1;
    int sample =128;
    while(1){
      for (int i = 0; i < sample; i++){
              Aout = Ain;
              ADCdata[i] = Ain;
              wait(1./sample);
          }

          for (int i = 0; i < sample; i++){
              pc.printf("%1.3f\r\n", ADCdata[i]);
              wait(0.1);
          }
      
    }

}