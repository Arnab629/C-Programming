//14. Write a program to add the elements of each row and each column of a matrix.

#include <stdio.h>
int main() 
{
	printf("**Program to add the elements of each row and each column of a matrix**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int rows, cols, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols], row_sum[rows], col_sum[cols];
    for (i = 0; i < rows; i++) row_sum[i] = 0;
    for (i = 0; i < cols; i++) col_sum[i] = 0;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }
    printf("Sum of each column:\n");
    for (i = 0; i < cols; i++) {
        printf("Column %d: %d\n", i + 1, col_sum[i]);
    }
    return 0;
}
