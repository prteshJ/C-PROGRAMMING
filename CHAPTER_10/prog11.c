#include <stdio.h>
#include <stdbool.h>

int  strToInt (const char  string[]) 
{
    int  i = 0, intValue, result = 0;
    int  negative = false;

    // test for leading minus sign 

    if ( string[0] == '-') {
        negative = true;
        i = 1;
    }

    while ( string[i] >= '0' && string[i] <= '9' ) {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
        ++i;
    }

    if ( negative )
        result  = -result;

    return result;
}

int main(void) {
        int strToInt (const char string[]);
//      char c; 

        printf("%i\n", strToInt("-245"));
        printf("%i\n", strToInt("-100") + 25);
        printf("%i\n", strToInt("13x5"));

        return 0;
}



