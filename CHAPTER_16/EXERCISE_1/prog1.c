// Program to illustrate the various printf formats

/***************************************************************************
Integers(#6) :
0xf179 | f179
=>((15*(16^3))+(1*(16^2))+(7*(16^1))+(9*(16^0))) = 61817
In case of floats, %e means scientific notation & %g does same but it is
more aesthetically pleasing
Do note unless specified otherwise, after decimal point, by default 6
digits are displayed
Consider %7.2f here 7 denotes float value to be displayed in a minimum of
7 columns and 2 after decimal point denotes upto 2 decimal places
If float value conists of less than 7 columns , printf right justifies
value adding spaces to ensure value is displayed in minumum columns needed
which in this case is 7
***************************************************************************/

#include <stdio.h>

int main(void) {
	char		c = 'X';
	char		s[] = "abcdefghijklmnopqrstuvwxyz";
	int		i = 425;
	short int	j = 17;
	unsigned int 	u = 0xf179U;
	long int	l = 75000L;
	long long int	L = 0x1234567812345678LL;
	float		f = 12.978F;
	double 		d = -97.4583;
	char		*cp = &c;
	int		*ip = &i;
	int 		c1, c2;
	int		accuracy = 3; // Included to enhance readability
 	int 		field_width = 8, precision = 2; // Enhance readability

	printf("Integers:\n");
	printf("%i	%o	%x	%u  \n", i, i, i, i); // #1
	printf("%x	%X	%#x	%#X \n", i, i, i, i); // #2
	printf("%+i	% i	%07i	%.7i\n", i, i, i, i); // #3
	printf("%i	%o	%x	%u  \n", j, j, j, j); // #4
	printf("%i	%o	%x	%u  \n", u, u, u, u); // #5
	printf("%li	%lo	%lx	%lu \n", l, l, l, l); // #6
	printf("%lli	%llo	%llx	%llu\n", L, L, L, L); // #7

	printf("\nFloats and Doubles:\n");
	printf("%f	%e	%g\n", f ,f, f);      //#1
	printf("%.2f	%.2e	  \n", f ,f);         //#2
	printf("%.0f	%.0e	  \n", f ,f);         //#3
	printf("%7.2f	%7.2e 	  \n", f ,f);         //#4
	printf("%f	%e	%g\n", d ,d, d);      //#5
	printf("%.*f	   \n", accuracy, d);         //#6
	printf("%*.*f\n", field_width ,precision, d); //#7
	/*************************************************
	In case of "*.*f" printf statement above,
        value of d is displayed 2 decimal places in a
	field size of 8 characters
	NOTICE THAT the '-' sign as well as the '.' are
	INCLUDED in the FIELD WIDTH COUNT
	*************************************************/

	printf("\nCharacters:\n");
	printf("%c\n", c);        //#1
	printf("%3c%3c\n", c ,c); //#2
	printf("%x\n", c);        //#3

	printf("\nStrings:\n");
	printf("%s     \n", s); //#1
	printf("%.5s   \n", s); //#2
	printf("%30s   \n", s); //#3
	printf("%20.5s \n", s); //#4
	printf("%-20.5s\n", s); //#5

	printf("\nPointers:\n");
	printf("%p	%p\n\n", ip, cp); //#1

	printf("This%n is fun.%n\n", &c1, &c2); //#1
	printf("c1 = %i, c2 = %i\n", c1, c2);   //#2
	/*******************************************
	In above case, argument to %n format
	specifier in printf should be pointer to an
	int
	printf when used with %n actually stores the
	number of characters it has written so far
	into integer pointed to by this argument
	So in c1 , "This" hence 4 characters=>c1=4
	So in c2, "This..fun."=>c2=12
	NOTE spaces are counted , %n isn't counted
	annd decimal point is counted
	*******************************************/

	return 0;
}
