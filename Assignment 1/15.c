// Write a C program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500.

#include<stdio.h>
int main()
{
 int i;
 printf("**Numbers divisible by 5 and 11 or not within the range of 100 to 500**\n");
 printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
 printf("The numbers divisible by 5 and 11 between 100 and 500 :\n");
for(i=100;i<=500;i++)
{
    if(i%5==0 && i%11==0)
    	printf("%d ",i);
}
printf("\n");
}
