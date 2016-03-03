#include <stdio.h>

int main(void) {
	int n ;

	printf("Value of n	Square of n\n");

	for(n = 1; n <= 10; ++n) {
		printf("    %i	            %i\n", n, n*n);
	}

	return 0;

}
