//17. Write a program to check whether a matrix is a sparse matrix or not.

#include <stdio.h>
int main()
{
	printf("**Program to check whether a matrix is a sparse matrix or not**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int rows, cols, i, j, count = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    if (count > (rows * cols) / 2) {
        printf("Sparse matrix.\n");
    } else {
        printf("Not a sparse matrix.\n");
    }
    return 0;
}
