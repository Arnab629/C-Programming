//5. Write a program to convert a decimal number taken as input from a user to the corresponding binary number and store the result in an array.

#include <stdio.h>
int main() 
{
	printf("**Program to convert a decimal number to binary and store in an array**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int num, i=0, bin[32];
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) 
	{
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary number: ");
    for (i=i-1;i>=0;i--) {
        printf("%d", bin[i]);
    }
    return 0;
}
