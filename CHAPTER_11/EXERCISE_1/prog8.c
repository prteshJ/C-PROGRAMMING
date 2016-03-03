// Program to illustrate using pointers and functions
// Inside a function , pointer gets copied when function is called , so can change data but not pointer

#include <stdio.h>

void test (int *int_pointer) {
	*int_pointer = 100;
								//	int_pointer = &new_val;
								//	printf("Inside funtion new_val = %i \n", *int_pointer);
}

int main(void) {
	void test (int *int_pointer);				//, int new_val);
	int i = 50, *p = &i;
								//int k = 57;

	printf("Before the call to test i = %i \n", i);

	test(p);

	printf("After the call to test i = %i \n", i);

								//test(p, k);
								//printf("After the call to test i = %i     new_val = %i\n", i, *p);

	return 0;
}
