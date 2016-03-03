// Using variable length arrays
#include <stdio.h>

void transposeMatrix(int row, int col, int M[row][col], int T[col][row]) {

        int i, j;

        for(i = 0; i < col; ++i) {
                for(j = 0; j < row; ++j)
                        T[i][j] = 0;
        }

        for(i = 0; i < col; ++i) {
                for(j = 0; j < row; ++j)
                        T[i][j] = M[j][i];
        }

        printf("Transpose Matrix contents are:\n");

        for(i = 0; i < col; ++i){
                for(j = 0; j < row; ++j)
                        printf("%5i",T[i][j]);
                printf("\n");
        }
}

int main(void) {
        int i, j, temp;
	int row,col;

	printf("Enter the number of rows & columns: ");
	scanf("%i %i", &row, &col);
	int Matrix[row][col], Transpose[col][row];
	void transposeMatrix(int row, int col, int M[row][col], int T[col][row]);

        for(i = 0; i < row; ++i) {
                temp = i;
                for(j = 0; j < col; ++j)
                        Matrix[i][j] = (++temp) *  (i + 5);
        }

        printf("Contents of orginal matrix are:\n");

        for(i = 0; i < row; ++i) {
                for(j = 0; j < col; ++j)
                        printf("%5i", Matrix[i][j]);

                printf("\n");
        }

        transposeMatrix(row,col,Matrix,Transpose);

        return 0;
}
