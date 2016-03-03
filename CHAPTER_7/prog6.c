#include <stdio.h>

int main(void) {
	int fibonacci, f0 = 0, f1 = 1, count = 0;

	for( count = 0; count < 15; ++count) {
		if(count < 1) { 
			fibonacci = f0;
		}
		else if(count == 1) {
			fibonacci = f1;
		}
		else {

			fibonacci = f0 + f1;
			f0 = f1;
			f1 = fibonacci;
		}
		printf("\n%i	Fibonacci number	%i", count+1, fibonacci);
	}

	printf("\n");

	return 0;
}
