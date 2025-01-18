// Write a C program to generate the first 'n' terms of the Fibonacci sequence.

#include<stdio.h>
int main()
    {
    printf("\n**Fibonacci Series**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int a=0,b=1,s=0,n;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("Fibonacci Series =\n");
    printf("%d ",s);
    s=a+b;
    for(int i=2;i<=n;i++)
    {
          printf("%d ",s);
          s=a+b;
          a=b;
          b=s;
    }
          printf("\n");
    }
