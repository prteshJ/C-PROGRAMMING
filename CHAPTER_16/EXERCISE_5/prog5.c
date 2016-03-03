/* Program to extract columns from each line of a file
   (similar to the UNIX cut command) */

#include <stdio.h>

int main(void)
{

    char  inName[64];
    FILE  *input;
    int   m, n, currentColumn, character;

    printf ("Enter name of file: ");
    scanf ("%63s", inName);
    printf ("Enter starting and ending column numbers: ");
    scanf ("%d%d", &m, &n);

    if ( (input = fopen (inName, "r"))  ==  NULL ) {
        fprintf (stderr, "Can't open %s for reading.\n", inName);
        return 1;
    }
    else {
       currentColumn = 1;

       while ( (character = getc (input)) != EOF ) {
            if ( character == '\n' ) {
               putchar ('\n');
               currentColumn = 0;
            }
            else if ( currentColumn >= m  &&  currentColumn <= n )
               putchar (character);

            ++currentColumn;
        }
    }
}

