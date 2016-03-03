#include <stdio.h>

 void insertString (char source[], char text[], int index)
{
    int a = 0, b = 0, i = 0;

    for (a = 0; text[a] != '\0'; a++);
    for (b = 0; source[b] != '\0'; b++);

    for (; b >= index; b--)
        source[b + a] = source[b];

    for (i = 0; i < a; i++)
        source[index + i] = text[i];
}

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

 int findString (const char source[], const char search[])
{ 
   int i = 0, a = 0;

    while (source[a] != '\0')
    {
        if (source[a] == search[i])
        {
            if (search[i + 1] == '\0')
                return (a - i);
            else
                i++;
        }
        else
        {
            i = 0;
        }
        a++;
    }

    return (-1);
}

 void replaceString(char source[], char s1[], char s2[])
{
    int i, a;

    if ( ( i = findString(source, s1) ) != -1)
    {
        for(a = 0; s1[a] != '\0'; a++);

        removeString(source, i, a);
        insertString(source, s2, i);
    }
}

 int main (void)
{
    char source[100] = "123456789";
    char source1[100] ="You are 1 awesome fellow";

    printf("Original string: %s.\n", source);
    replaceString(source, "45678", "fivesixseveneight");
    printf("Result string: %s.\n", source);

//   printf("Original string: %s.\n", source1);
//   replaceString(source1, "1", "one");
//   printf("Result string: %s.\n", source1);

    return 0;
}
