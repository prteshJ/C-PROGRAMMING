/*********************************************************
    Exercise 8
		Write a function called sort3() to sort three integers 
into ascending order. (This function is not to be implemented with 
arrays.)
*********************************************************/

#include <stdio.h>

void sort3 (int* a)
{
/*     Bubble method from before, limited to 3 chars. Could be done 
better but for the sake of simplicity the above method was used. */
    int i, *iPtr = &i;
    int j, *jPtr = &j;
    int temp, *tempPtr = &temp;

    for ( *iPtr = 0;  *iPtr < 3 - 1;  ++*iPtr )
        for ( *jPtr = *iPtr + 1;  *jPtr < 3;  ++*jPtr )
            if ( *(a + *iPtr) > *(a + *jPtr) )
            {
	//	printf("\n a[%d]      %d        a[%d]       %d\n", *iPtr,  *(a + *iPtr), *jPtr, *(a + *jPtr));
                *tempPtr = *(a + *iPtr);
                *(a + *iPtr) = *(a + *jPtr);
                *(a + *jPtr) = *tempPtr;
            }
}

int main (void)
{
    int array[] = {0, 2, -2};
    int i = 0;

    printf ("The array before the sort:\n");
    for ( i = 0;  i < 3;  ++i )
        printf ("%i ", array[i]);

    sort3 (array);

    printf ("\n\nThe array after the sort:\n");
    for ( i = 0;  i < 3;  ++i )
        printf ("%i ", array[i]);
    printf ("\n");

    return 0;
}

