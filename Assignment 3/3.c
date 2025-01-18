//3. Write a program to insert an element in an array in a particular position.

#include <stdio.h>
int main() 
{
	printf("**Insert an element in an array in a particular position**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, pos, value;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value; // Insert the value

    printf("Updated array:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
