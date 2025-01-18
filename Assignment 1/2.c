// Write a C program to find the sum of individual digits of a given positive integer.

#include<stdio.h>
int main()
{
 int n,s=0;
 printf("\n**Sum of Digits of a Positive Integer**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("Enter a Positive Integer Number :");
 scanf("%d",&n);
 while(n!=0)  //Logic to find the sum of digits
 {
s=s+(n%10); 
        n=n/10;
 }
       printf("Sum of digits = %d\n",s);
 }
