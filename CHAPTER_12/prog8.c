#include <stdio.h>

char getIntSize (void)
{
    unsigned int a = ~0;
    char i = 0;

    while (a & 0x01)
    {
        i++;
        a >>= 1;
    }

    return i;
}

void bitpat_set (unsigned int* source, unsigned int val, char index, char count)
{
    char nbits = getIntSize();
    unsigned int mask = 0;
    char i = 0;

    // First put all the bits to zero.
    for (i = 0; i < count; i++)
        mask |= 0x01 << (nbits - 1 - i - index);

     // Now mask is FFFF0000 and source is 1234FF00

     *source &= ~(mask);

     // Now source is (0000)FF00

     // if << (-value) do << (-(- value)) => << (+ve value)
     if((index-count) < 0)
	*source |= (val << (-(index - count)));   // (0000) FF00 | (5551)0000 => 5551FF00
     else
	//     Then OR the bits.
    	*source |= (val << (index - count));
}

int main (void)
{
    unsigned int val = 0x1234FF00U;
    bitpat_set(&val, 0x5551U, 0, 16);

//     bitpat_set(&val,0xF,28,4);    //-- 32 31 30 29 | 28 27 26 25 | 24 23 22 21 | 20 19 18 17 | 16 15 14 13 | 12 11 10 9 | 8 7 5 6 | 4 3 2 1 | (left to right) bits --
                                  // -- 0x1         | 0xF         | 0x3         | 0x4         | 0xF         | 0xF        | 0x0     | 0x0     | 0x1F34FF00
    printf("The value of extracted value is %X.\n", val);

    return 0;
}
