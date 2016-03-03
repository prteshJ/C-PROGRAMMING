// Function that raises an integer to a positive integer power

#include <stdio.h>

long int x_to_the_n(int x, int n) {
	int i = 0;
	long int result = 1;
	
	while(i != n) {
		result = result * x;
		++i;
	}
	return result;
}

int main(void) {

	int number , exponent;
	long int outcome;
	printf("Enter the number (x) & the exponent(n): ");
	scanf("%i %i", &number, &exponent);

	outcome = x_to_the_n(number,exponent);
	printf(" %i raised to the power of %i = %li\n", number, exponent, outcome);
	
	return 0;
}
