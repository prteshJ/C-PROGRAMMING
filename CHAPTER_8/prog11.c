// Function that takes an integer array & number of elements and returns sum of elements of array

#include <stdio.h>

int main(void) {
	int number, count, result;
	int arraySum(int input[], int numberOfElements);

	printf("Enter array size: ");
	scanf("%i", &number);

 	while(number == 0 || number < 0) {
                printf("Please enter a value greater than 0.\n");
                printf("Enter new value: ");
                scanf("%i", &number);
        }

	int arr[number];

	for(count = 0; count < number; ++count) {
		printf("Enter %2i  element: ", count + 1);
		scanf("%i", &arr[count]);
	}

	result = arraySum(arr,number);
	printf("The sum of all elements in the array is %i\n", result);

	return 0;
}

int arraySum(int input[], int numberOfElements) {
	int sum = 0, counter;

	for(counter = 0; counter < numberOfElements; ++counter) {
		sum += input[counter]; 
	}

	return sum;
}
