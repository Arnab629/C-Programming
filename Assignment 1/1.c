// Write a C program to find the sum and average of three numbers.

#include<stdio.h>
int main()
{
       	printf("\n****Sum and Average of 3 Numbers****\n");
        printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
        int a,b,c,sum=0;
        double avg=0;
        printf("Enter 3 numbers: ");
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;  //Logic of adding the numbers
        avg=sum/3;   //Logic for finding the average of numbers
        printf("\nSum = %d\n",sum);
        printf("Average = %f\n",avg);
}
