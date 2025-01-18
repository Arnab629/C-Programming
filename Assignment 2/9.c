//9. Write a C program to check whether a number is a Prime, Armstrong, or Perfect number using functions.

#include<stdio.h>
void prime(int n)
{
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		k++;
	}
	if(k==2)
		printf("It is a Prime Number\n");
	else
		printf("It is not a Prime Number\n");
}
int power(int m,int c)
{
	int p=1;
	for(int i=1;i<=c;i++)
	{
		p*=m;
	}
	return p;
}
void armstrong(int n)
{
	int m,d=n,c=0,s=0;
	while(n!=0)
	{
		c++;
		n=n/10;	
	}
	n=d;
	while(n!=0)
	{
		m=n%10;
		s+=power(m,c);
		n=n/10;	
	}	
	n=d;
	if(n==s)
		printf("It is an Armstrong Number\n");
	else
		printf("It is not an Armstrong Number\n");
}
void perfect(int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	if(n==s)
		printf("It is a Perfect Number\n");
	else
		printf("It is not a Perfect Number\n");
}
int main()
{
printf("** C program to check whether a number is a prime, Armstrong, or Perfect number using functions. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int num;
printf("Enter a Number ::\n");
scanf("%d",&num);
prime(num);
armstrong(num);
perfect(num);
}
