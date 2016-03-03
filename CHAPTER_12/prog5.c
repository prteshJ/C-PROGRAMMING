#include <stdio.h>
#include <stdbool.h>

/********************************************************************************************************************
   ---  EXPLANATION OF VARIOUS FUNCTIONS USED WITH THEIR PURPOSE ---
   --- mask simply creates a new number with specified bit set to 1 -- 
   --- Consider bit_set(a,24) for example ---
   --- (0x01 << (nbits-1-n)) gives 1 << (32-1-24) i.e. 1 << 7 (1000 0000) (1 with 7 0's) ---
   --- Now a -> 0 so 0 | above number => above number ---
   --- In hex it is (000000)80 ---
   --- In case of bit_test(a,24) where a is above number ---
   --- mask => (0x01 << (nbits - 1 -n)) => (1 << (32-1-24)) => (1 << 7) => (1000 0000) (1 with 7 0's) ---
   --- So I I do bitwise AND with original number , I will get 1 only if 24th bit in original number is set to 1 ---
*********************************************************************************************************************/


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

char bit_test (unsigned int a, char n)
{
    char nbits = getIntSize();
    unsigned int mask = 0;

    if (n >= nbits)
        return 0;

    mask = 0x01 << (nbits - 1 - n);

    if (a & mask)
        return 1;
    else
        return 0;
}

unsigned int bit_set (unsigned int a, char n)
{
    char nbits = getIntSize();

    if (n >= nbits)
        return 0;

    return (a | (0x01 << (nbits - 1 - n)));
}

int main (void)
{
    unsigned int a = 0;

    printf("Number before the sets: %x.\n", a);
    a = bit_set(a, 24);
    a = bit_set(a, 16);
    a = bit_set(a, 8);
    a = bit_set(a, 0);
    printf("Number after the sets: %x.\n", a);

    printf("Bit %i is %s.\n", 24, bit_test(a, 24) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 16, bit_test(a, 16) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 8, bit_test(a, 8) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 0, bit_test(a, 0) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 23, bit_test(a, 23) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 15, bit_test(a, 15) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 7, bit_test(a, 7) ? "ON" : "OFF");
    printf("Bit %i is %s.\n", 2, bit_test(a, 2) ? "ON" : "OFF");

    return 0;
}
