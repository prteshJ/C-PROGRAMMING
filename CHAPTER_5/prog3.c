#include <stdio.h>

int main(void) {
	int triangularNumber , n ;

	printf("Number		Triangular Number\n");
	for(n = 5; n <= 50; n+=5) {

		triangularNumber = n * (n+1) / 2 ;
		printf("   %i		       %i\n", n, triangularNumber);
	}

	return 0;
}
