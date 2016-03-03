#include<stdio.h>

int main(void) {

	// Result is a muliple of 2  

	int number, result;

	printf("\n     TABLE OF 2      \n");
	printf("Number     Multiple of 2\n");
	for(number = 0; number <= 10; ++number) {
		result = number * 2;
		printf("  %.2i \t       %.2i\n", number, result);
	}

	return 0;
}
