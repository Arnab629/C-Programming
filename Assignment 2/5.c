//5. Write a C program to find the sum of the digits of the number using a recursive function.

#include<stdio.h>
int sod(int n,int s)
{
	if(n==0)
		return s;
	else
	{
		s+=n%10;
		return sod(n/10,s);
	}
}
int main()
{
printf("** C program to find the sum of the digits of the number using a recursive function. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int n,sum;
printf("Enter a Number :: ");
scanf("%d",&n);
sum=sod(n,0);
printf("Sum of Digits = %d",sum);
}
