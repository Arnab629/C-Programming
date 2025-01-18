//11. Write a program to find second second-highest number from the array without using sorting.

#include <stdio.h>
int main() 
{
	printf("**Program to find the second-highest number from an array without sorting**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, first, second;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }
    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("The second-highest number is: %d\n", second);
    return 0;
}
