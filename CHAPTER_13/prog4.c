#include <stdio.h>

#define MAX3(a, b, c)  ( (a) > (b) ? ( (a) > (c)  ? (a) : (c) )	 : ( (b) > (c) ? (b) : (c) ) )

int main(void) {
	int a = 10, b = 8, c = 12;
	
	printf("The first number is %i and the second number is %i and the third number is %i, the maximum value is %i.\n", a, b, c, MAX3(a, b, c));
	
	return 0;
}