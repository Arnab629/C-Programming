//2. Write a program that stores the marks of the subject Mathematics and English of n number of students in an array and then prints their total marks.

#include<stdio.h>
int main()
{
	printf("**Program to store marks and print the total marks**\n");
	printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
	int n,i;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	int m[n],e[n],t[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter Maths marks for student %d: ",i);
		scanf("%d",&m[i]);
		printf("Enter English marks for student %d: ",i);
		scanf("%d",&e[i]);
		t[i]=m[i]+e[i];
	}
	printf("Total marks of students:\n");
	for(i=1;i<=n;i++)
	{
		printf("Student %d: %d\n",i,t[i]);
	}
}
