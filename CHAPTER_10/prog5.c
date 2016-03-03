#include <stdio.h>
#include <stdbool.h>

// find s1 inside source, return index number if found, -1 if not found  

int  findString (const char  source[], const char  s[])
{
    int  i, j, foundIt = false;

    // try each character in source 

    for ( i = 0;  source[i] != '\0'  &&  !foundIt;  ++i ) {
        foundIt = true;

        // now see if corresponding chars from s match 

        for ( j = 0;  s[j] != '\0' &&  foundIt;  ++j )
            if ( source[j + i] != s[j] || source[j + i] == '\0' )
              foundIt = false;

        if (foundIt)
           return i;
    }

    return -1;
}

int main(void) {
	char str1[]  = "Can you find an apple in the orchard ?";
	char str2[] = "apple";
	int found = 0;

	printf("\n The substring {%s} found in {%s}  at position %i \n", str2, str1, findString(str1, str2));
        printf("\n The substring {%s} found in {%s}  at position %i \n", "hat", "a chatterbox", findString("a chatterbox","hat"));

	return 0;
}
