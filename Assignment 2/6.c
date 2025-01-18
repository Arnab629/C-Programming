// 6. Write a C program to read an integer number and print the reverse of that number using recursion.

#include<stdio.h>
int reverse(int n,int rev)
{
	if(n==0)
		return rev;
	else
	{
		rev=rev*10+(n%10);
		return reverse(n/10,rev);
	}
}
int main()
{
printf("** C program to read an integer number and print the reverse of that number using recursion. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int n;
printf("Enter a Number: ");
scanf("%d",&n);
printf("Reverse = %d",reverse(n,0));
}
