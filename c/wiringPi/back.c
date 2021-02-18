#include <wiringPi.h>
#include <stdio.h>

int main (void){


	int del = 3;
	int steps = 500;

  	wiringPiSetup ();
  	pinMode (0, OUTPUT);
  	pinMode (2, OUTPUT);
  	pinMode (3, OUTPUT);
  	pinMode (4, OUTPUT);

	digitalWrite (0, LOW);
	digitalWrite (4, LOW);
	digitalWrite (2, LOW);
	digitalWrite (3, LOW);

	for(int a=1; a<=steps; a++){


		digitalWrite (3, LOW);
		digitalWrite (0, HIGH);
		delay(del);

		digitalWrite (0, LOW);
		digitalWrite (4, HIGH);
		delay(del);

		digitalWrite (4, LOW);
		digitalWrite (2, HIGH);
		delay(del);

		digitalWrite (2, LOW);
		digitalWrite (3, HIGH);
		delay(del);
	}

	digitalWrite (0, LOW);
	digitalWrite (4, LOW);
	digitalWrite (2, LOW);
	digitalWrite (3, LOW);

	return 0 ;

  }
