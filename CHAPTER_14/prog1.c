#include <stdio.h>

typedef int (*fPtr)(void);

int Function (void) {
	return 5;
}

int main(void) {
	fPtr function1;
	
	function1 = Function;
	
	printf("The result of function is: %i.\n", function1()); // print %p function1 & Function both addresses are same 
	
	return 0;
}