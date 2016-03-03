// PG 673 PROGRAMMING IN C KOCHAN  SUBSTRING FINDER

#include <stdio.h>

int stringLength (const char string[]) {
        int count = 0;

        while( string[count] != '\0') 
                ++count;

        return count;
}

int substring(char source[], int start, int count, char result[]) {
	int substringStatus = -1;
	int stringLength (const char string[]);
	int lenS, lenSource, i , j = 0;

	lenSource = stringLength(source);

	if(start > lenSource)
		return 0;
	
	printf("\n%i Count \n", count);

	for(i = start; i < (count+start) && source[i]!='\0'; ++i) {
		result[j] = source[i];
		j+=1;
	}
	result[j] = '\0';

	printf("\nSource {%s}         result     {%s}\n", source ,   result);
	
	lenS = stringLength(result);

	if(lenS > 0)
		return 1;
	
	return 0;
	
}

int main(void) {
	int substring(char source[], int start, int count, char result[]);
	int substringFound = 0;
	char result[100];

	substringFound = substring("character", 4, 3, result);
	printf("\n Substring found status is %i\n", substringFound);

	substringFound = substring("two words", 4, 20, result);
        printf("\n Substring found status is %i\n", substringFound);
	return 0;
}
