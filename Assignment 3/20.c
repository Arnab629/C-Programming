//20. Write a C program to read the RollNo, Name, Address, and Age marks of 12 students in the BCT class and display the details from the function.

#include <stdio.h>
struct student {
    int roll_no;
    char name[50];
    char address[100];
    int age;
    float marks;
};

void display(struct student s) {
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s", s.name);
    printf("Address: %s", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() 
{
	printf("**Program to read and display the details of 12 students using a structure**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    struct student students[12];
    int i;
    for (i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nDetails of students:\n");
    for (i = 0; i < 12; i++) {
        printf("\nStudent %d:\n", i + 1);
        display(students[i]);
    }
    return 0;
}
