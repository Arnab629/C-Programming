//7. Using functions, write a C program to find the maximum and minimum between two numbers.

#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int min(int x,int y)
{
	if(x<y)
		return x;
	else
		return y;
}
int main()
{
printf("** C program to find the maximum and minimum between two numbers using function. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
int a,b;
printf("Enter 2 Nummbers:\n");
scanf("%d %d",&a,&b);
printf("The Maximum Number = %d\n",max(a,b));
printf("The Minimum Number = %d\n",min(a,b));
}
