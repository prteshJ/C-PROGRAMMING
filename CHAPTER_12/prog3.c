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

int main (void)
{
    printf("What is the size of an integer in bits in your particular machine? %i.\n", getIntSize());

    return 0;
}
