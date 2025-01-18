// Write a C program to input any alphabet and check whether it is a vowel or consonant.

#include<stdio.h>
#include<ctype.h>
int main()
{
 char ch;
 printf("**Input any alphabet and check whether it is a vowel or consonant**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("Enter an Alphabet :");
 scanf("%c",&ch);
 if(isalpha(ch))
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}
  else
    printf("It is not an alphabet\n");
}
