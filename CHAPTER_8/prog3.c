// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x) {
        if(x < 0)
                x = -x;

        return (x);
}

// Function to compute the square root of a number

float squareRoot(float x, float epsilon_value) {
        float epsilon = epsilon_value;						// .00001 default value of const float epsilon 
        float       guess   =    1.0;

        while(absoluteValue( guess * guess - x) >= epsilon)                      //{
                                                                                //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));
                guess = (x/guess + guess) / 2.0;
                                                                              //}

                                                                             //printf("%f {guess} %f {x} %f {guess * guess - x} \n", guess, x, absoluteValue(guess*guess - x));

                return guess;
}

int main(void) {

        printf("squareRoot(2.0)   is %f\n", squareRoot(2.0, .000002));     //  value .0001 -> .000002  1.414216 ->  1.414214
        printf("squareRoot(144.0) is %f\n", squareRoot(144.0, .2));       //   value .0001 -> .2      12.000000 -> 12.000546
        printf("squareRoot(17.5)  is %f\n", squareRoot(17.5, .009));     //    value .0001 -> .009     4.183300 ->  4.183301

        return 0;
}

