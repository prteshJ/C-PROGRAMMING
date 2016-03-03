/********************************************************************************************************
    Exercise 10
        Consider the definition of the printx macro from this chapter:
            #define printint(n)  printf ("%i\n", x ## n)
        Could the following be used to display the values of the 100 variables x1–x100? Why or why not?
            for (i = 1; i < 100; ++i)
                printx (i);
********************************************************************************************************/

// This code will not work

// No it can't. It's not the value of the variable that it's concatenated to x but the name of the variable i.

#include <stdio.h>

#define printx(n)  printf ("%i\n", x ## n)

int main (void)
{
   // int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5, x6 = 6;
    //int xi = 0; //works
    int i = 0;

    for (i = 1; i < 100; ++i)  // change i to xi , then works
        printx (i);

    return 0;
}

/********************************************************************************************************
prog10.c:22:9: error: use of undeclared identifier 'xi'
        printx (i);
        ^
prog10.c:14:36: note: expanded from macro 'printx'
#define printx(n)  printf ("%i\n", x ## n)
                                   ^
<scratch space>:118:1: note: expanded from here
xi
^
1 error generated.
make: *** [program10] Error 1
********************************************************************************************************/