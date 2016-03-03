// Function to convert a string to an integer

#include <stdio.h>

int strToInt (const char string[]) {
	int i, intValue, result = 0;

	for ( i = 0; string[i] >= '0' && string[i] <= '9'; ++i ) {
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return result;
}

int main(void) {
	int strToInt (const char string[]);
//	char c;	

	printf("%i\n", strToInt("245"));
	printf("%i\n", strToInt("100") + 25);
	printf("%i\n", strToInt("13x5"));

/*	printf("\n Press SPACE to exit ...\n");
	do {
		c = getchar();
		if(c > 99)  {
			printf("\n CHARACTER\tASCII\n");
			printf("\n %c\t%i\n", c, c);
		}
	}while(c != ' '); */

	return 0;
}
