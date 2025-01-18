// Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
#include<ctype.h>
int main()
{
 char ch;
 printf("**Check whether a character is alphabet or not**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("Enter a character :");
 scanf("%c",&ch);
 if(isalpha(ch))
    printf("It is alphabet\n");
 else
    printf("It is not alphabet\n");
 return 0;
}
