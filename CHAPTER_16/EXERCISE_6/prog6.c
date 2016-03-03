/********************************************************************************
 Program that displays contents of a file at the terminal 20 lines at a time
 If any other character except 'q' is entered , it displays next 20 lines
 If 'q' is entered program terminates
********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *input;
	int character;
	int lineCount=0;
	char inName[64], userChoice = 'a',option[2];

	printf("Enter name of input file:\n");
	scanf("%63s", inName);

	if((input = fopen(inName,"r")) == NULL) {
		fprintf(stderr,"Cannot open %s for reading.\n",inName);
		return 1;
	}

	while((character = getc(input)) != EOF && userChoice != 'q') {
		if(character == '\n') {
			++lineCount;
			if(lineCount-20 != 0)
				putc('\n',stdout);
			if(lineCount % 20 == 0) {
				lineCount = 0;
				printf("\nEnter any character except 'q' to continue:");
				scanf(" %c%*c", &userChoice);
			}
		}
		else {
			if(userChoice != 'q') {
				putc(character,stdout);
			}
		}
	}

	fclose(input);
	return 0;
}

