#include "mbed.h"
//#include "uLCD_4DGL.h"
//uLCD_4DGL uLCD(D1, D0, D2);

uLCD_4DGL uLCD(D1, D0, D2);
AnalogOut Aout(DAC0_OUT);
PwmOut PWM1(D6);
Serial pc( USBTX, USBRX );
DigitalOut D(D0);
float data[128];

int main(){
     /*Q1
      uLCD.printf("\n106060012\n"); //Default Green on black text
      uLCD.line(0, 0 , 0, 10, 0xFFFFFF);
      uLCD.line(0, 0 , 10, 0, 0xFFFFFF);
      uLCD.line(10, 10 , 0, 10, 0xFFFFFF);
      uLCD.line(10, 10 , 10, 0, 0xFFFFFF);
      wait(30);
    */
 
     for(float i=0; i<1;i+=0.1){       
        PWM1 = i;
        p=PWM1;
        wait(0.1);
        pc.printf("%1.3f\r\n",p);  
    }
 for(float i=1; i<0;i-=0.1){   
        PWM1 = i;
        p=PWM1;
        wait(0.1);
        pc.printf("%1.3f\r\n",p);  
    }
  
    }
