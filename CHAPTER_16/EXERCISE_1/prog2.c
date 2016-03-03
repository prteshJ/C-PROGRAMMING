// Program to echo characters until end of file

/* Redirect input to a file prog2 < data */

#include <stdio.h>

int main(void) {
	int c;

	while( (c = getchar()) != EOF)
		putchar(c);

	return 0;
}
