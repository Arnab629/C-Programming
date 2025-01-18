// Write a C program to generate prime numbers between 1 to n.

#include<stdio.h>
int main()
{
    printf("\n**Prime Numbers between 1 to n**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    int n,i,k;
    printf("Enter a range :");
    scanf("%d",&n);
    printf("Prime Numbers =\n");
    for(i=1;i<=n;i++)
    {
          for(int j=1;j<=i;j++)
          {
                if(i%j==0)
                k++;
          }
                if(k==2)
                printf("%d ",i);
                k=0;
     }
        printf("\n");
}
