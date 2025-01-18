//6. Write a program to input a binary number in an array and convert it into a corresponding decimal number.

#include <stdio.h>
#include <math.h>
int main() 
{
	printf("**Program to convert a binary number to decimal**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n, i, decimal = 0;
    printf("Enter the number of binary digits: ");
    scanf("%d", &n);
    int binary[n];
    printf("Enter the binary number:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }
    for (i = 0; i < n; i++) {
        decimal += binary[n - i - 1] * pow(2, i);
    }
    printf("Decimal number: %d\n", decimal);
    return 0;
}
