#include <stdio.h>

int main(void) {
	int number, factorial = 1, temp = 0 ;

	printf("Number		Factorial\n");

	for(number = 1;number <= 10; ++number) {
		temp = number;
		while((temp - 1)!=0){
			factorial = temp * (temp - 1);
			printf("TEMP(%i)----FACTORIAL( %i)\n", temp, factorial);
			temp = temp - 1;
		}
		printf("   %i		%i\n",number, factorial);
	}

	return 0;
}
