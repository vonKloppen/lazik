#include <wiringPi.h>
#include <stdlib.h>



int main (void){


 	wiringPiSetup();
  	pinMode(1,PWM_OUTPUT) ;
	pwmSetMode(PWM_MODE_MS);
	pwmSetRange(1024);
	pwmSetClock(200);

	setenv("WIRINGPI_GPIOMEM", "1", 1);

	pwmWrite(1,100);

}
