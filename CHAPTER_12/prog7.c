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

unsigned int bitpat_get (unsigned int source, char index, char count)
{
    char nbits = getIntSize();
    unsigned int mask = 0;
    char i = 0;

    for (i = 0; i < count; i++)
        mask |= 0x01 << (nbits - 1 - i - index);   // make the bits to be extracted all 1's (If you print mask after this , its , (00)ff0000)


/****************************************************
  --  We have extract 8 bits starting from 8th bit --
  --  i => same as count => 8 --
  --  index => 8 --
  --  nbits => 32 --
  --  0x01 => 00000001 --
  -- (nbits - index - i) => (32-8-8) => 16 --
  	mask =>    00FF0000
                &
	source =>  5FF0F0F0
       ______________________ 
        value  => (0F0000000)
                      >>
                  (16)
       _______________________
       return => (000000F0)
       _______________________
  -- Thus, it returns extracted bits as expected --
     
****************************************************/

    return (source & mask) >> (nbits - index - i); 
}

int main (void)
{
    int val = bitpat_get (0x5FF0F0F0, 8, 8);

    printf("The value of extracted value is %X.\n", val);

    return 0;
}

