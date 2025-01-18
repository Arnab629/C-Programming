//3. Write a C program to generate a Fibonacci series using a recursive function.

#include<stdio.h>
void fibo(int a,int b,int n,int i)
{
	if(i>n)
		return ;
	else
	{
		printf("%d ",a);
		return fibo(b,a+b,n,i+1);
	}
}
int main()
{
printf("** C program to generate a Fibonacci series using a recursive function. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int r;
printf("Enter range :: \n");
scanf("%d",&r);
fibo(0,1,r,1);
}
