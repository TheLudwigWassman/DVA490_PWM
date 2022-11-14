#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

/* PWM Raspberry Pi 4 model B */
int LED1 = 26;

int main() {

  printf ("Start:\n");
    wiringPiSetup();	/* initialize wiringPi setup */

    pinMode(LED1,OUTPUT);	/* set GPIO as output */
    
    while (1)
    {
       

       for (int i=1; i<1000; i++){

          pwmWrite (LED1, i);

          delay (50);

       }
       
       
    
       //digitalWrite(LED1,HIGH);		/* write high on GPIO */ 
    }
}
