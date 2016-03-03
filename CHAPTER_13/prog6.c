#include <stdio.h>

#define IS_UPPER_CASE(x) ( ( (x) <= 'Z' && (x) >= 'A' ) ? 1 : 0 )

int main(void) {
	char c = 'A';
	
	printf("Is %c upper case? %i.\n", c, IS_UPPER_CASE(c));
	
	return 0;
}