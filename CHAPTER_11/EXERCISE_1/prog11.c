// Function to sum the elements of an integer array

#include <stdio.h>

int arraySum(int array[], const int n) {                // When I pass arrays as a formal parameter to a function , I am inherently passing a pointer to it , so  int *array & int array[] both work
	int sum = 0 , *ptr;                            // End of array means immediately after last element of the array
	int * const arrayEnd = array + n;              // arrayEnd is a constant pointer which always point to end of array  , array + 1 moves ptr to integer from say, intially at array[0] to array[1]

	for(ptr = array; ptr < arrayEnd; ptr+=1) 
		sum += *ptr;
	
	return sum;
}

int main(void) {
	int arraySum(int array[], const int n);           // If I  prototype int * array & in formal parameter its int *array , it still works for reason explained above 
	int values[10] = { 3, 7, -9, 3 , 6, -1, 7, 9, 1, -5 };

	printf("The sum is %i\n", arraySum(values, 10));

	return 0;
}
