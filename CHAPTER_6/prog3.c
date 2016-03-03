#include <stdio.h>

int main(void) {
	int first_number, second_number;
	float result;

	printf("\nEnter first number  : ");
	scanf("%i", &first_number);
	printf("\nEnter second number : ");
	scanf("%i", &second_number);

	if(second_number == 0)
		printf("\n Division by zero!");
	else
		result = (float)first_number / second_number ;

	printf("Result after dividing %i by %i is %.3f\n", first_number, second_number, result);

	return 0;		
}
