//8. Write a C program to check whether a number is even or odd using functions.

#include<stdio.h>
void odd_even(int x)
{
	if(x%2==0)
		printf("Even Number\n");
	else
		printf("Odd Number\n");
}
int main()
{
printf("** C program to check whether a number is even or odd using functions. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
printf("Enter a number ::");
int a;
scanf("%d",&a);
odd_even(a);	
}
