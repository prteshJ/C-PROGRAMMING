/* Program to copy one file to another */
#include <stdio.h>

/* Convert lower case to upper case */
#define TO_UPPER(character) ((character >= 'a' && character <= 'z') ? character - 'a' + 'A' : character)

int main(void) {
	FILE *in, *out;
	char inName[64], outName[64];
	int character;

	printf ("Enter name of file to be copied: ");
	scanf ("%63s", inName);
	printf ("Enter name of output file: ");
        scanf ("%63s", outName);

	if((in = fopen(inName, "r")) == NULL) {
		fprintf(stderr,"Cannot open %s for reading.\n",inName);
		return 1;
	}
	if((out = fopen(outName, "w")) == NULL) {
		fprintf(stderr,"Cannot open %s for writing.\n",outName);
		return 2;
	}

	while((character = getc(in)) != EOF) {
		putc(TO_UPPER(character),out);
	}

	printf("File has been copied.\n");

	return 0;
}
