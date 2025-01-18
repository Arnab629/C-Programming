//15. Write a program to perform the multiplication of two matrices.

#include <stdio.h>
int main() 
{
	printf("**Program to perform the multiplication of two matrices**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
