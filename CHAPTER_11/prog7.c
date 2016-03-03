/*********************************************************
    Exercise 7
		Write a pointer version of the sort() function from 
Chapter 7, “Working with Functions.” Be certain that pointers are 
exclusively used by the function, including index variables in the 
loops.
*********************************************************/

/* Program to sort an array of integers into ascending order */

#include <stdio.h>

void  sort (int* a, int* n)
{
    int i, *iPtr = &i;
    int j, *jPtr = &j;
    int temp, *tempPtr = &temp;

    for ( *iPtr = 0;  *iPtr < *n - 1;  ++*iPtr )
        for ( *jPtr = *iPtr + 1;  *jPtr < *n;  ++*jPtr )
            if ( *(a + *iPtr) > *(a + *jPtr) )
            {
	//	printf("\n a[%d]  : %d       a[%d]   %d \n", *iPtr, *(a + *iPtr), *jPtr, *(a + *jPtr) );
                *tempPtr = *(a + *iPtr);
                *(a + *iPtr) = *(a + *jPtr);
                *(a + *jPtr) = *tempPtr;
            }
}

int main (void)
{
    int  i, n = 16;
    int  array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

    printf ("The array before the sort:\n");
    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);

    sort (array, &n);

    printf ("\n\nThe array after the sort:\n");
    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);
    printf ("\n");

    return 0;
}
