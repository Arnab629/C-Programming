//4. Write a C program to swap two integers using call-by-value and call-by-reference methods of passing arguments to a function.

#include<stdio.h>
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() 
{
int x, y;
printf("** C program to swap two integers using call-by-value and call-by-reference methods of passing arguments to a function. **\n");
printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
printf("Enter two integers:\n");
scanf("%d %d", &x, &y);
printf("Before swap_by_value: x = %d, y = %d\n", x, y);
swap_by_value(x, y);
printf("After swap_by_value: x = %d, y = %d\n\n", x, y);    printf("Before swap_by_reference: x = %d, y = %d\n", x, y);
swap_by_reference(&x, &y);
printf("After swap_by_reference: x = %d, y = %d\n", x, y);   return 0;
}
