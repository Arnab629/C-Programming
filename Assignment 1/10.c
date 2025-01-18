// Write a program to convert temperatures in Celsius to Fahrenheit and vice-versa.

#include<stdio.h>
int main()
{
        printf("\n**Celsius to Farenheit and Vice-versa**\n");
        printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
        int ch;
        double f,c;
        printf("1 for Celisus to Farenheit\n2 for Farenheit to celsius\nEnter your choice :");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Enter Temperature in Celsius :");
            scanf("%lf",&c);
            f=((c/5)*9)+32;
            printf("Temperature in Farenheit := %lf\n",f);
        }
        else if(ch==2)
        {
            printf("Enter Temperature in Farenheit :");
            scanf("%lf",&f);
            c=((f-32)/9)*5;
            printf("Temperature in Celsius := %lf\n",c);
        }
        else
            printf("Wrong Choice!!!!\n");
}
