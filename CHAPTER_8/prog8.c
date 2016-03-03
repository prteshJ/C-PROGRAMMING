// Function to calculate the roots of a quadratic equation

#include <stdio.h>

// Function to calculate the absolute value of a number

float absoluteValue(float x) {
        if(x < 0)
                x = -x;

        return (x);
}

// Function to compute the square root of a number

double squareRoot(double x) {
        const double  epsilon = 0.00001;
        double       guess   =    1.0;

        while(absoluteValue( guess * guess - x) >= epsilon)                      
                                                                               
                guess = (x/guess + guess) /2.0;                                               

                return guess;
}

void quadratic_solver(int a, int b, int c) {
	double determinant = 0;
	double root1,root2;
	determinant =  (b * b) - (4 * a *c);
	
	if(determinant < 0) 
		printf("The roots of given quadratic equation are imaginary\n");
	else if(determinant == 0) {
		root1 = root2 = -b / (2 * a);

		printf("The given quadratic equation has roots %g and %g\n", root1, root2);
	}
	else {
		root1 = ((-b + squareRoot(determinant))/ (2 * a));
		root2 = ((-b - squareRoot(determinant))/ (2 * a));

		printf("The given quadratic equation has roots %g and %g\n", root1, root2);
	}
}

int main(void) {

	int a, b, c;

	printf("Enter the values of co-efficients a, b and c: ");
	scanf("%i %i %i", &a, &b, &c);

	quadratic_solver(a,b,c);

        return 0;
}

