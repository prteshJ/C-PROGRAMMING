 /*********************************************************
    Exercise 10
		Rewrite the compareStrings() function from Chapter 9 to 
use character pointers instead of arrays.
*********************************************************/

#include <stdio.h>

int  compareStrings (const char*  s1, const char*  s2)
{
    int  i = 0, answer;

    while ( *(s1 + i) == *(s2 + i) && *(s1 + i) != '\0'&& *(s2 + i) != 
'\0' )
        ++i;

//	printf("\n i  is %d      *(s1+i)   is   %c       *(s2+i)  is   %c  \n", i, *(s1+i), *(s2+i));  // Use %d if it's '\0' I see output as 0

    if ( *(s1 + i) < *(s2 + i) )
        answer = -1;               /* s1 < s2  */
    else if ( *(s1 + i) == *(s2 + i) )
        answer = 0;                 /* s1 == s2 */
    else
        answer = 1;                 /* s1 > s2  */

    return answer;
}

int main (void)
{
    const char string1[] = "HOLA";
    const char string2[] = "ADIOS";
    const char string3[] = "HOLA";

    printf("Result of comparing \"%s\" and \"%s\" is: %i.\n", string1, 
string2, compareStrings(string1, string2));
    printf("Result of comparing \"%s\" and \"%s\" is: %i.\n", string1, 
string3, compareStrings(string1, string3));
    printf("Result of comparing \"%s\" and \"%s\" is: %i.\n", string2, 
string3, compareStrings(string2, string3));

    return 0;
}
