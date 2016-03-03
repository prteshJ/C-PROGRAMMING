// Program to illustrate pointers

#include <stdio.h>

int main(void) {
	int count = 10, x;
	int *int_pointer;

	int_pointer = &count;
	x = *int_pointer;

	printf("count = %i, x = %i \n", count, x);
//	printf("\n pointer to %p address \n", int_pointer);
	return 0;
}
