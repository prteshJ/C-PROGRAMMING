#include <stdio.h>

extern double result;

int main(void) {
	void doSquare(void);

        doSquare();

        printf("Result = %g\n",result);

        return 0;
}
