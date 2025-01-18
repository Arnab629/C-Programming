// Write a C program to check whether a number is negative, positive, or zero.

#include<stdio.h>
int main()
{
 int n;
 printf("**Positive Negetive or Zero**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("Enter a number :");
  scanf("%d",&n);
  if(n<0)
    printf("Negetive Number\n");
  else if(n>0)
    printf("Positive Number\n");
  else
    printf("It is Zero\n");
}
