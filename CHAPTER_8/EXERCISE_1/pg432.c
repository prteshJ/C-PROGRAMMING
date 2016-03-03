// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x) {
        if(x < 0)
                x = -x;

        return (x);
}

/* Function to compute the square root of a number.
   If a negative argument is passed, then a message
   is displayed and -1.0 is returned.			*/ 

float squareRoot(float x) {
        const float epsilon = .00001;
        float       guess   =    1.0;

	if( x < 0) {
		printf("Negative argument to squareRoot.\n");
		return -1.0;
	}

        while(absoluteValue( guess * guess - x) >= epsilon)                      //{
                                                                                //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));
                guess = (x/guess + guess) / 2.0;
                                                                              //}

                                                                             //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));

                return guess;
}

int main(void) {

        printf("squareRoot(2.0)   is %f\n", squareRoot(2.0));
        printf("squareRoot(144.0) is %f\n", squareRoot(144.0));
        printf("squareRoot(17.5)  is %f\n", squareRoot(17.5));
	printf("squareRoot(-9.0)  is %f\n", squareRoot(-9.0));

        return 0;
}




