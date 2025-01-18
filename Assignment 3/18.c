//18. Write a C program to create a structure named company which has name, address, phone and no Of Employee as member variables. Read the name of the company, its address, phone and no Of Employee. Finally display these members" values.

#include <stdio.h>
struct company {
    char name[100];
    char address[200];
    char phone[15];
    int noe;
};

int main() 
{
	printf("**Program to create a structure named company and display its members**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    struct company comp;
    printf("Enter the company name: ");
    fgets(comp.name, sizeof(comp.name), stdin);
    printf("Enter the company address: ");
    fgets(comp.address, sizeof(comp.address), stdin);
    printf("Enter the company phone number: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);
    printf("Enter the number of employees: ");
    scanf("%d", &comp.noe);

    printf("\nCompany Details:\n");
    printf("Name: %s", comp.name);
    printf("Address: %s", comp.address);
    printf("Phone: %s", comp.phone);
    printf("Number of Employees: %d\n", comp.noe);
    return 0;
}
