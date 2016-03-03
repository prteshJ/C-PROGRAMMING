/*******************************************************
 Program merges lines from 2 files and writes results
 to standard output
 If one file has less lines than other, remaining lines
 from larger file gets copied to standard output
*******************************************************/

#include <stdio.h>

#define IS_LESS(numLineFile1,numLineFile2) ((numLineFile1 > numLineFile2)? 1:0)

int main(void) {
	FILE *inFile1, *inFile2, *tmp1, *tmp2;
	int nLineFile1 = 0, nLineFile2 = 0;
	int charFile1, charFile2;
	char inputFile1[64], inputFile2[64];

	printf("\nEnter the path to input file 1:");
	scanf("%s", inputFile1);
	printf("\nEnter the path to input file 2:");
	scanf("%s", inputFile2);

	if((inFile1 = (FILE*)fopen(inputFile1,"r")) == NULL) {
		fprintf(stderr,"Cannot open %s for reading.\n",inputFile1);
		return 1;
	}
	if((inFile2 = (FILE*)fopen(inputFile2, "r")) == NULL) {
		fprintf(stderr,"Cannot open %s for reading.\n",inputFile2);
		return 2;
	}

	tmp1 = (FILE*)fopen(inputFile1,"r");
	tmp2 = (FILE*)fopen(inputFile2,"r");

	while((charFile1 = getc(tmp1)) != EOF) {
		if(charFile1 == '\n')
			nLineFile1++;
	}

	while((charFile2 = getc(tmp2)) != EOF) {
		if(charFile2 == '\n')
			nLineFile2++;
	}

	fclose(tmp1);
	tmp1 = NULL;
	fclose(tmp2);
	tmp2 = NULL;

//	printf("File %s has number of lines = %d.\n", inputFile1, nLineFile1);
//	printf("File %s has number of lines = %d.\n", inputFile2, nLineFile2);

	if(IS_LESS(nLineFile1,nLineFile2)) {
//		printf("\n **** first case **** \n");
		while((charFile1 = getc(inFile1)) != EOF) {
			while(charFile1 != '\n') {
				putc(charFile1,stdout);
				charFile1 = getc(inFile1);
			}
			if(charFile1 == '\n') {
				putc('\n',stdout);
			}
			if((charFile2 = getc(inFile2)) != EOF) {
				while(charFile2 != '\n') {
					putc(charFile2,stdout);
					charFile2 = getc(inFile2);
				}
			}
			if(charFile2 != EOF) {
				putc('\n',stdout);
			}
		}
	}
	else  { //printf("\n **** second case **** \n");
		while((charFile2 = getc(inFile2)) != EOF) {
			if((charFile1 = getc(inFile1)) != EOF) {
				while(charFile1 != '\n') {
	                        	putc(charFile1,stdout);
					charFile1 = getc(inFile1);
				}
                        	putc('\n',stdout);
			}
			while(charFile2 != '\n') {
	                        putc(charFile2,stdout);
				charFile2 = getc(inFile2);
			}
			if(charFile2 != EOF) {
	                        putc('\n',stdout);
			}
                }

	}

	fclose(inFile1);
	fclose(inFile2);

	return 0;
}
