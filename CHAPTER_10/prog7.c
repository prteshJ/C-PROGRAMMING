#include <stdio.h>

int stringLength (const char string[]) {
        int count = 0;

        while( string[count] != '\0') 
                ++count;

        return count;
}



/* insert string s into string source starting at i
   This function uses the stringLength function defined
   in the chapter.

   Note: this function assumes source is big enough
         to store the inserted string (dangerous!)   */

void  insertString (char  source[], char  s[], int  i)
{
   int  j, lenS, lenSource;
   int stringLength (const char string[]);

   /* first, find out how big the two strings are */

   lenSource = stringLength (source);
//   printf("\nThe source length is %i\n", lenSource);
   lenS = stringLength (s);
 //  printf("The string to be inserted has length %i\n", lenS);

   /* sanity check here -- note that i == lenSource
      effectively concatenates s onto the end of source */

   if (i > lenSource)
      return;

   /* now we have to move the characters in source
      down from the insertion point to make room for s.
      Note that we copy the string starting from the end
      to avoid overwriting characters in source.
      We also copy the terminating null (j starts at lenS) 
      as well since the final result must be null-terminated */

   for ( j = lenSource;  j >= i;  --j ) {
//	printf("Pos %i		%c	Pos %i		%c \n",lenS + j,  source[lenS+j], j,  source[j]);
     	 source [lenS + j] = source [j];
//	printf("\nPos %i          %c      Pos %i          %c \n",lenS + j,  source[lenS+j], j,  source[j]);
	}

//	printf("\n--------------%s-----------------\n", source);

   /* we've made room, now copy s into source at the 
      insertion point */

   for ( j = 0;  j < lenS; ++j )
       source [j + i] = s[j];

//printf("\n--------------%s-----------------\n", source);
}

int main(void) {
	char str1[100] = "The wrong son";                   // Specified size so that source string is wide enough
	char str2[50] = "per";                             // Specified size so that string to be inserted fits sufficiently into character array
	int insertPos = 10;
	void  insertString (char  source[], char  s[], int  i);

	printf("The string {%s} after being inserted into {%s} changes it to ", str2, str1);
	insertString(str1,str2,insertPos);
	printf(" {%s}\n", str1);
	return 0;
}
