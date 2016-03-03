#include <stdio.h>

#define ABSOLUTE_VALUE(x)   ( (x) < 0 ? (-(x)) : (x) )

int main (void)
{
    signed int a = 12;
    signed int b = 40;

    printf("The absolute value of %i is %i.\n", a - b, ABSOLUTE_VALUE(a - b));

    return 0;
}