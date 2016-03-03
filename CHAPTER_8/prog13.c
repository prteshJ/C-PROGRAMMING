// Program to sort an array of integers into ascending or descending  order

#include <stdio.h>

void sort(int a[], int n, int order) {
        int i, j, temp;
	char sort;

	if(order == 0)
		sort = 'a';
	if(order == 1)
		sort = 'd';
			if(sort == 'a') {
			        for( i = 0; i < n-1; ++i)
                			for( j = i + 1; j < n; ++j) 
                        				if( a[i] > a[j]) {
                                				temp = a[i];
                                				a[i] = a[j];
                                				a[j] = temp;
							}              
					}

			if(sort == 'd') {
                                for( i = 0; i < n-1; ++i)
                                        for( j = i + 1; j < n; ++j)
                                                        if( a[i] < a[j]) {
                                                                temp = a[i];
                                                                a[i] = a[j];
                                                                a[j] = temp;
                                                        }
                                        }

}

int main(void) {
        int i, sort_option;
        int array[16] = { 34, -5,  6,  0, 12, 100, 56, 22,
                          44, -3, -9, 12, 17,  22,  6, 11 };

        printf("The array before the sort:\n");

        for( i = 0; i < 16; ++i )
                printf("%i ", array[i]);

	printf("\nPlease specify order to sort (0 : ascending 1: descending): ");
	scanf("%i", &sort_option);
	
	void sort(int a[], int n, int sort_option);

        sort(array, 16, sort_option);

        printf("\n\nThe array after the sort:\n");

        for( i = 0; i < 16; ++i)
                printf("%i ", array[i]);

        printf("\n");

        return 0;
}
