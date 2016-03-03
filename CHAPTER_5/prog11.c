#include<stdio.h>

// Calculates sum of digits of given arbitary number

int main(void) {
	int number , sum = 0, remainder, original;

	printf("Enter a number: ");
	scanf("%i", &number);

	original = number;

	while(number!=0) {
		remainder = number % 10;
		sum += remainder;
		number /= 10;
	}

	printf("Sum of digits of %i is %i\n",original, sum );

	return 0;
}
