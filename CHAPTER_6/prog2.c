// Test if first number is divisible by the second number

#include <stdio.h>

int main(void) {
	int first_number , second_number;
	
	printf("Enter first number : ");
	scanf("%i", &first_number);
	printf("\nEnter second number : ");
	scanf("%i", &second_number);

	if(first_number % second_number == 0)
		printf("\n%i is divisible by %i\n", first_number, second_number);
	else
		printf("\n%i is not divisible by %i\n", first_number, second_number);
	return 0;
}
