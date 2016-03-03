#include <stdio.h>

int main(void) {
	float result = (3.31 * (10e-8) * 2.01 * (10e-7)) / (7.16 * (10e-6) + 2.01 * (10e-8));
	
	printf("The result is %g\n",result);

	return 0;
}
