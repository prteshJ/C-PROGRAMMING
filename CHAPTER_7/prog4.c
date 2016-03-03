#include <stdio.h>

int main(void) {
	float f_arr[10],average = 0, sum = 0;
	int index;

	for( index = 0; index < 10; ++index ) {
		printf("\nEnter %i value :  ", index + 1);
		scanf("%f", &f_arr[index]);
	}

	for( index = 0; index < 10; ++index ) {
		sum = sum + f_arr[index];
	}

	average = sum / 10;

	printf("\nThe average of 10 floating-point values entered is %f\n", average);

	return 0;
}
