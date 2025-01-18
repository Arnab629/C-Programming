//16. Write a program to check whether a matrix is an identity matrix or not.

#include <stdio.h>
int main() 
{
	printf("**Program to check whether a matrix is an identity matrix or not**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, j, is_identity = 1;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                is_identity = 0;
                break;
            }
        }
        if (!is_identity)
            break;
    }
    if (is_identity)
        printf("Identity matrix.\n");
    else
        printf("Not an identity matrix.\n");
    return 0;
}
