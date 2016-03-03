#include <stdio.h>

int main(void) {
	printf("Next largest multiple for i = 365 & j = 7 is %i\n", 365 + 7 - (365 % 7));

	printf("Next largest multiple for i = 12258 & j = 23 is %i\n", 12258 + 23 - (12258 % 23));

	printf("Next largest multiple for i = 996 & j = 4 is %i\n", 996 + 4 - (996 % 4));

	return 0;
}
