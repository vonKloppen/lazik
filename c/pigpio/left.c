#include<pigpio.h>
#include<unistd.h>



void main(){

	gpioInitialise();
	gpioSetMode(18, PI_OUTPUT);

	gpioServo(18,1000);
	usleep(500000);

	gpioTerminate();
}
