#include <stdio.h>

int main(void) {
	int number, result;
	scanf("%d",&number);
	printf("Entered number is %d.\n",number);
	result = number * number;
	printf("Result of square of %d is %d.\n", number, result);
	return 0;
}
