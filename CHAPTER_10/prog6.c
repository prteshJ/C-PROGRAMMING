#include <stdio.h>

 void removeString (char source[], int index, int count)
{
    int a = 0;

    for (; source[a] != '\0'; a++);


    if ((index + count) > a) 
        source[index] = '\0';
    else
    {
        for (; source[index + count - 1] != '\0'; index++) 
            source[index] = source[index + count];
    }
 }

 int main (void)
{
    char source[] = "the wrong son";
	int i = 0;

    printf("Original string: %s \n", source);

    removeString(source, 4, 6);

    printf("Result string: %s \n", source);

    return 0;
}
