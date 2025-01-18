// Write a C program to check whether a given number is an Armstrong number or not.

#include<stdio.h>
#include<math.h>
int main()
{
     printf("\n**Armstrong Number**\n");
     printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
     int i,m,c,n,s=0;
     printf("Enter a Number :");
     scanf("%d",&n);
     int d=n;
     while(n!=0)
      {
          c++;
          n=n/10;
      }
      n=d;
      while(n!=0)
      {
          m=n%10;
          s=s+(int)pow(m,c);
          n=n/10;
        }
       n=d;
       if(s==n)
                printf("Armstrong Number\n");
        else
                printf("Not Armstrong Number\n");
}
