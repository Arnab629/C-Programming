// Write a C program to check if a given number is a strong number.

#include<stdio.h>
int fact(int x);
int main()
{
 printf("\n**Strong Number**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 int n,s,d,m;
 printf("Enter a number :");
 scanf("%d",&n);
 d=n;
 while(n!=0)
 {
        m=n%10;
        s=s+fact(m);
        n=n/10;
  }
  n=d;
  if(n==s)
       printf("Strong Number\n");
  else
       printf("Not Strong Number\n");
}
int fact(int x)
{
        int f=1,i;
        for(i=1;i<=x;i++)
                f=f*i;
        return f;
}
