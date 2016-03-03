#include <stdio.h>

void transposeMatrix(int M[4][5], int T[5][4]) {

	int row, col;

	for(row = 0; row < 5; ++row) {
		for(col = 0; col < 4; ++col)
			T[row][col] = 0;
	}

	for(row = 0; row < 5; ++row) {
		for(col = 0; col < 4; ++col) 
			T[row][col] = M[col][row];
	}

	printf("Transpose Matrix contents are:\n");

	for(row = 0; row < 5; ++row){
		for(col = 0; col < 4; ++col)
			printf("%5i",T[row][col]);
		printf("\n");
	}
}

int main(void) {
	void transposeMatrix(int A[4][5], int B[5][4]);
	int Matrix[4][5],Transpose[5][4];
	int row, col, temp;

	for(row = 0; row < 4; ++row) {
		temp = row;
		for(col = 0; col < 5; ++col) 
			Matrix[row][col] = (++temp) *  (row + 4 );
	}

	printf("Contents of orginal matrix are:\n");

	for(row = 0; row < 4; ++ row) {
		for(col = 0; col < 5; ++col)
			printf("%5i", Matrix[row][col]);

		printf("\n");
	}

	transposeMatrix(Matrix,Transpose);	

	return 0;
}
