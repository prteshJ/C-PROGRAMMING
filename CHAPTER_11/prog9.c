/*********************************************************
    Exercise 9
		Rewrite the readLine() function from Chapter 9 so that 
it uses a character pointer rather than an array.
*********************************************************/

#include <stdio.h>

/* Function to read a line of text from the terminal */

void  readLine (char* buffer)
{
    char  character;
    int   i = 0;

    do
    {
        character = getchar ();
        *(buffer + i) = character;
//	printf("\n  buffer[%d]      %c      i: %d  \n", i, *(buffer + i), i );
        ++i;
    }  while ( character != '\n' );

//    printf("\n i is now %d \n", i);
    *(buffer + i - 1) = '\0';
}

int main (void)
{
    int   i;
    char  line[81];

    printf("Key your line of text: \n");
    for ( i = 0; i < 3; ++i )
    {
        readLine (line);
        printf ("%s\n\n", line);
    }

    return 0;
}
