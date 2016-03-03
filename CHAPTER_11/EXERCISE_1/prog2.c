// Further examples of pointers

#include <stdio.h>

int main(void) {
	char c = 'Q';
	char *char_pointer = &c;

	printf("\n%c %c\n", c, *char_pointer);

	c = '/';
	printf("\n%c %c\n", c, *char_pointer);

	*char_pointer = '(';
	printf("\n%c %c\n", c, *char_pointer);

//	if((&c) == (char_pointer))
//	printf("\n Memory address %p \n", char_pointer);

	return 0;
}
