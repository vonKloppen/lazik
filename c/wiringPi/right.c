#include <wiringPi.h>
#include <stdio.h>




int main (void){


 	wiringPiSetup();
  	pinMode(1,PWM_OUTPUT) ;
	pwmSetMode(PWM_MODE_MS);
	pwmSetRange(1024);
	pwmSetClock(200);
	pwmWrite(1,160);

}
