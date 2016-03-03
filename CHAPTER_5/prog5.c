#include<stdio.h>

//Prints factorial of first 10 numbers

int main(void) {
	int n = 10, factorial = 1, count;

	printf("Number   Factorial\n");

	for(count = 1; count <= n; ++count) {
		factorial *= count;
		printf("   %i	%i\n", count, factorial);
	}
	return 0;
}

