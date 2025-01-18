// Write a C program to input any character and check whether it is an alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("**Input any character and check whether it is an alphabet, digit, or special character**\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
printf("Enter a character :");
scanf("%c",&ch);
if(isalpha(ch))
    printf("Alphabet\n");
else if(isdigit(ch))
    printf("Digit\n");
else
    printf("Special Character\n");
}
