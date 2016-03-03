#include <stdio.h>

/**************************************************************************************************************************
	--- EXPLANATION OF FUNCTION USED --- 
	--- sbit simply traverses through given source starting from 0 th leftmost bit until 31 st rightmost bit ---
        --- In each iteration , I traverse through source one bit at a time from 0 until 31st in last iteration ---
        --- pbit contains pattern to be matched , n contains number of right most bits of pattern to be considered ---  
        --- Initially when i is 0 (i initally points to 0th left most bit of source) , pbit points to 1st bit of pattern ---
        --- I iterate through all bits in source , one at a time and check for each bit if it matches current pbit ---
        --- If it does , I get next bit in pattern which my pbit points to and increment a (pattern track variable) ---
        --- Now we matched first bit and a is 1 , let's say there are n bits ---
        --- Eventually after matching n bits , a becomes equal to n (last bit in pattern) ---
        --- And we return the index (i - a) which gives relative postion in source where pattern was found ---
        --- It just gives 1 bit position before the matching pattern starts in source --- 
***************************************************************************************************************************/

char getIntSize (void)
{
    unsigned int a = ~0;
    char i = 0;

    while (a & 0x01)
    {
        i++;
        a >>= 1;    // Discard bit and reduce number by 1 bit  i.e 31 st bit is 1, then check 30 th bit , until reached last bit or bit is 0
    }

    return i;
}

// This function returns the index related to the size of the integer rather than to the size of the number 
// within the integer, which is more useful and more portable.

unsigned int bitpat_search (unsigned int source, unsigned int pattern, char n)
{
//  There are faster ways to implement this.
    char nbits = getIntSize();
    char sbit = 0, pbit = 0, i = 0, a = 0;

    for (i = 0, a = 0; i < nbits; i++)
    {
        sbit = ( (source & (0x01 << (nbits - 1 - i))) >> (nbits - 1 - i) );
        pbit = ( (pattern & (0x01 << (n - 1 - a))) >> (n - 1 - a));

        if (sbit == pbit)
            a++;
        else
            a = 0;

        if (a == n)
            return (i - a);
    }

    return -1;
}

int main (void)
{
    int index = bitpat_search (0xe1f4, 0x5, 3);

    printf("The value of index is %i.\n", index);

    return 0;
}
