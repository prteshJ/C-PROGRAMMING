// Program to reverse the digits of a number

#include <stdio.h>

int main(void) {
	int number, right_digit, flag = 1;

	printf("Enter your number.\n");
	scanf("%i", &number);

	do {

		right_digit = number % 10;
		if(right_digit < 0 )
		{
			if(number / 10 != 0)
			{
				printf("%i", right_digit * (-1));
			}
			if(number / 10 == 0 && flag == 1)
			{
				printf("%i-", right_digit * (-1));
				flag = 0;
			}
		}
		else
		{
			printf("%i", right_digit);
		}
		number = number / 10;

	} while(number != 0);

	printf("\n");

	return 0;
}
