#include <stdio.h>

#define IS_LOWER_CASE(x)    ( ((x) <= 'z' && (x) >= 'a') ? 1 : 0)
#define IS_UPPER_CASE(x)    ( ((x) <= 'Z' && (x) >= 'A') ? 1 : 0)
#define IS_ALPHABETIC(x)    ( (IS_LOWER_CASE(x) || IS_UPPER_CASE(x)) ? 1 : 0 )

int main(void) {
	char c = '1';
	
	printf("Is %c alphabetic? %i.\n", c, IS_ALPHABETIC(c));
	
	return 0;
}