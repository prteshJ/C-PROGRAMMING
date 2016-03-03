#include <stdio.h>

#define SHIFT(val, n) (((n) > 0) ? ((val) << (n)) : ((val) >> (-(n))))

unsigned int shift (unsigned int value, int n) {
	if (n > 0)		// left shift
		value <<= n;
	else 
		value >>= -n;
		
	return value;
}

int main(void) {
	unsigned int h = 30U;
	signed int z = -20;
	
	printf("Function result: %i.\n", shift(h, z));
	printf("Macro result: %i.\n", SHIFT(h, z));
	
	return 0;
}