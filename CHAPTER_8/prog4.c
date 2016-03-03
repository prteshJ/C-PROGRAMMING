// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x) {
        if(x < 0)
                x = -x;

        return (x);
}

// Function to compute the square root of a number

float squareRoot(float x) {
        const float epsilon = .00001;
        float       guess   =    1.0;

        while(absoluteValue( guess * guess - x) >= epsilon) {
                printf(" guess value = %f  \n", guess);
                guess = (x/guess + guess) / 2.0;
        }

                                                                            // Guess is initialised to 1 to make entry inside while loop 
									   // Number of iterations increases with number whose square root to be calculated increases and vice versa

                return guess;
}

int main(void) {

        printf("squareRoot(2.0)   is %f\n", squareRoot(2.0));
        printf("squareRoot(144.0) is %f\n", squareRoot(144.0));
        printf("squareRoot(17.5)  is %f\n", squareRoot(17.5));

        return 0;
}
