//1. Write a program to store marks for n number of student in an array and print their marks.

#include<stdio.h>
int main()
{
	printf("**Program to store marks and print them**\n");
	printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
	int n,i;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter marks for student %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("Marks obtained by student %d is %d\n", i,arr[i]);
	}
}
