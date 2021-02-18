#include<pigpio.h>
#include<unistd.h>


void main(){

	int del = 3000;
	int steps = 500;

	gpioInitialise();
	gpioSetMode(11,PI_OUTPUT);
	gpioSetMode(13,PI_OUTPUT);
	gpioSetMode(15,PI_OUTPUT);
	gpioSetMode(16,PI_OUTPUT);


	gpioWrite(17,0);
	gpioWrite(23,0);
	gpioWrite(27,0);
	gpioWrite(22,0);


	for(int a=1;a<=steps; a++){

		gpioWrite(22,0);
		gpioWrite(17,1);
		usleep(del);

		gpioWrite(17,0);
		gpioWrite(23,1);
		usleep(del);

		gpioWrite(23,0);
		gpioWrite(27,1);
		usleep(del);

		gpioWrite(27,0);
		gpioWrite(22,1);
		usleep(del);

	}


	gpioWrite(22,0);
	gpioWrite(27,0);
	gpioWrite(23,0);
	gpioWrite(17,0);

	gpioTerminate();


}
