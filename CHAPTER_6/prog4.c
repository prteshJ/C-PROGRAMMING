#include <stdio.h>

int main(void) {
	float accumulator, number;
	char operator;

	printf("\nBegin Calculations\n");
	
	scanf("%f %c", &accumulator, &operator);
	number = accumulator;

	while(operator != 'E') {
		

	       if(operator == 'S') {
			accumulator = number;
                	printf("\n = %f\n", accumulator);
       		}
       		 else if(operator == '+') {
                	accumulator += number;
                	printf("\n = %f\n", accumulator);
        	}
        	else if(operator == '-') {
                	accumulator -= number;
	                printf("\n = %f\n", accumulator);
        	}
		else if(operator == '*') {
			accumulator *= number;
                        printf("\n = %f\n", accumulator);
		}
        	else if(operator == '/') {
			if(number == 0)
				printf("\nDivision by zero!\n");
			else {
                		accumulator /= number;
                		printf("\n = %f\n", accumulator);
			}
        	}
        	else
                	printf("\nInvalid operator!\n");

	        scanf("%f %c", &number, &operator);
	}
		
	return 0;
}
