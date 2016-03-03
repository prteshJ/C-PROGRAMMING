//#include <stdio.h> // Include this if included printf statement commented below
double x; /*Could be used by other linked files by declaring it as extern double x*/
/*static*/ double result; /*Only local to current file if I uncomment static keyword*/

/*static*/ void doSquare(void) {
	double square(void); /*Defined in mod2.c*/

	x = 2.0;
	result = square();

	//printf("%g\n",result); //Omit static before void & uncomment this
}

