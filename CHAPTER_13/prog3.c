#include <stdio.h>

#define MIN(a, b) ( (a) < (b) ? (a) : (b) )

int main(void) {
	int a = 5, b = 8;
	
	printf("The first number is %i and the second number is %i, the minimum value is %i.\n", a, b, MIN(a, b));
		
	return 0;
}