//10. Write a C program to find the power of any number using recursion.

#include<stdio.h>
int pow(int m,int c,int p,int i)
{
	if(i>c)
		return p;
	else
	{
		p*=m;
		return pow(m,c,p,i+1);
	}
}
int main()
{
printf("** C program to find the power of any number using recursion. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int num,pw;
printf("Enter the Number:\n");
scanf("%d",&num);
printf("Enter the Power:\n");
scanf("%d",&pw);
printf("The Result = %d\n",pow(num,pw,1,1));
}
