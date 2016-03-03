#include <stdio.h>

int main(void) {
	float Celcius;
	float Fahrenheit = 27 ; // 27 degrees 
	
	Celcius = (Fahrenheit - 32) / 1.8 ;

	printf("Conversion from 27 degrees Fahreneit is  %f degrees Celcius\n",Celcius);

	return 0;
}
