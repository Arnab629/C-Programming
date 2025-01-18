// Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).

#include<stdio.h>
int main()
{
   int a,b,x;
   double s;
   printf("\n**Evaluate the algebraic expression (ax+b)/(ax b)**\n");
   printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
   printf("Enter the value of a,b & x ::");
   scanf("%d %d %d",&a,&b,&x);
   if((a*x-b)==0)
        printf("Division Error by 0");
   else
        s=(double)(a*x+b)/(a*x-b);
        printf("Solution = %lf",s);
        printf("\n");
}
