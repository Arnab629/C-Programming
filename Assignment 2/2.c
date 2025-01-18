//2. Write a C program to calculate the sum of the first 20 natural numbers using a recursive function.

#include<stdio.h>
int rec(int n,int s)
{
	if(n>20)
	{
		return s;
	}
	else
	{
		s+=n;
		return rec(n+1,s);
	}
}

int main()
{
printf("** C program to calculate the sum of the first 20 natural numbers using a recursive function. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
printf("Sum of First 20 Natural Numbers : %d\n",rec(1,0));
}
