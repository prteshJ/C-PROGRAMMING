#include <stdio.h>

#define IS_LOWER_CASE(x)    ( ((x) <= 'z' && (x) >= 'a') ? 1 : 0)
#define IS_UPPER_CASE(x)    ( ((x) <= 'Z' && (x) >= 'A') ? 1 : 0)
#define IS_ALPHABETIC(x)    ( (IS_LOWER_CASE(x) || IS_UPPER_CASE(x)) ? 1 : 0 )
#define IS_DIGIT(x)         ( ((x) >= '0' && (x) <= '9') ? 1 : 0 )
#define IS_SPECIAL(x)       ( (IS_DIGIT(x) || IS_ALPHABETIC(x)) ? 0 : 1 )

int main (void)
{
    char c = '1';

    printf("Is %c an special character? %i.\n", c, IS_SPECIAL(c));

    return 0;
}