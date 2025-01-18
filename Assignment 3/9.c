//9. Write a program to search for a particular element in an array.

#include <stdio.h>
int main() 
{
	printf("**Program to search for a particular element in an array**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\n");
    }
    return 0;
}
