/*********************************************************
    Exercise 12
		Given the following declarations:
            char  *message = "Programming in C is fun\n";
            char  message2[] = "You said it\n";
            char  *format  = "x = %i\n";
            int   x = 100;
        determine whether each printf() call from the following sets is valid and produces the same output as other calls from the set.
             Set 1
            printf ("Programming in C is fun\n");
            printf ("%s", "Programming in C is fun\n");
            printf ("%s", message);
            printf (message);
             Set 2
            printf ("You said it\n");
            printf ("%s", message2);
            printf (message2);
            printf ("%s", &message2[0]);
             Set 3
            printf ("said it\n");
            printf (message2 + 4);
            printf ("%s", message2 + 4);
            printf ("%s", &message2[4]);
             Set 4
            printf ("x = %i\n", x);
            printf (format, x);
*********************************************************/

#include <stdio.h>

int main (void)
{
    char  *message = "Programming in C is fun\n";
    char  message2[] = "You said it\n";
    char  *format  = "x = %i\n";
    int   x = 100;

//     Set 1
    printf("\n\n SET 1\n");
    printf ("Programming in C is fun\n");
    printf ("%s", "Programming in C is fun\n");
    printf ("%s", message);
    printf (message);
//     Set 2
    printf("\n\n SET 2\n");
    printf ("You said it\n");
    printf ("%s", message2);
    printf (message2);
    printf ("%s", &message2[0]);
//     Set 3
    printf("\n\n SET 3\n");
    printf ("said it\n");
    printf (message2 + 4);
    printf ("%s", message2 + 4);
    printf ("%s", &message2[4]);
//     Set 4
    printf("\n\n SET 4\n");
    printf ("x = %i\n", x);
    printf (format, x);

    return 0;
}

