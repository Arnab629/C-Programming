// Write a C program to find the maximum between two numbers.

#include<stdio.h>
int main()
{
 int a,b;
 printf("\n**Greatest Number Between Two Numbers**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("Enter 1st Number :");
 scanf("%d",&a);
 printf("Enter 2nd Number :");
 scanf("%d",&b);
 if(a>b)
    printf("The Greatest Number = %d\n",a);
 else if(b>a)
    printf("The Greatest Number = %d\n",b);
 else
    printf("Both Numbers are Equal\n");
}
