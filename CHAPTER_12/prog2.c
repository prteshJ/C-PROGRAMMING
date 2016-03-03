#include <stdio.h>
#include <stdbool.h>

/* NOTES: 
Reference : http://stackoverflow.com/questions/7622/shift-operator-in-c
If confused between logical & arithmetic shift refer above link
Arithmetic / Logical Shift only matters in case of right shift ( >> )
Since Arithmetic / Logical Left Shift ( << ) have the same effect
Unsigned char means 8 bits (0-255)
Signed char means  (1- Sign bit 7 bits - Magnitude ) (-128 to 127)
*/

char getCharBits (void)
{
    unsigned char a = ~0;
    char i = 0;

    while (a & 0x01)
    {
        i++;
        a >>= 1;
    }

    return i;
}

// Function that returns true if the computer performs arithmetic shifts 
// or false if it performs logical shifts.

bool isArithmeticShift (void)
{
    // First lets determine the number of bits in char.
    char bits = getCharBits();
    signed char a = (~0) >> bits;

    if (a & 0x01)
        return true;
    else
        return false;
}

int main (void)
{
    printf("This computer performs arithmetic shifts? %s.\n", 
isArithmeticShift() ? "YES" : "NO");

    return 0;
}

