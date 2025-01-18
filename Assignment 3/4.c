//4. Write a program to delete an element from a particular position of an array.

#include <stdio.h>
int main() 
{
	printf("**Delete an element in an array from a particular position**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Updated array:\n");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
