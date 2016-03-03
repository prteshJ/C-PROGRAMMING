/* Program to find the least common multiple of two
   non negative integer values and to return the result         */

#include <stdio.h>

int gcd(int u, int v) {
        int temp;

        while( v != 0 ) {
                temp = u % v;
                u = v;
                v = temp;
        }

        return u;
}

int lcm(int number1, int number2) {

	int leastCommonMultiple;

	leastCommonMultiple = (number1 * number2) / gcd(number1,number2);

	return leastCommonMultiple;

}

int main(void) {

        int num1 , num2, result;
	int gcd(int u, int v);
	int lcm(int number1, int number2);

	printf("Enter two numbers : ");
	scanf("%i %i", &num1, &num2);

	if((num1 > 0) && (num2 > 0))
		result  = lcm(num1,num2);
	else
		printf("Please enter a number greater than 0!!!\n");

	printf("The lcm of %i and %i is %i\n", num1, num2, result);

        return 0;
}
