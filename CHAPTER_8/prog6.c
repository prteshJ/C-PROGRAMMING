// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x) {
        if(x < 0)
                x = -x;

        return (x);
}

// Function to compute the square root of a number

double squareRoot(double x) {
        const double  epsilon = 0.00001;
        double       guess   =    1.0;

        while(absoluteValue( guess * guess - x) >= epsilon)                      //{
                                                                                //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));
                guess = (x/guess + guess) /2.0;
                                                                              //}

                                                                             //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));

                return guess;
}

int main(void) {

        printf("squareRoot(2.0)   is %f\n", squareRoot(2.0));
        printf("squareRoot(144.0) is %f\n", squareRoot(144.0));
        printf("squareRoot(17.5)  is %f\n", squareRoot(17.5));

        return 0;
}

