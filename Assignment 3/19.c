//19. Define a structure �complex� (typedef) to read two complex numbers and perform addition, and subtraction of these two complex numbers and display the result.

#include <stdio.h>
typedef struct {
    float real;
    float imag;
} complex;

complex add(complex c1, complex c2) {
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
complex subtract(complex c1, complex c2) {
    complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() 
{
	printf("**Program to define a structure complex to perform addition and subtraction of complex numbers**\n");
    printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    complex c1, c2, result;
    printf("Enter real and imaginary part of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter real and imaginary part of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    result = add(c1, c2);
    printf("Sum = %.2f + %.2fi\n", result.real, result.imag);
    result = subtract(c1, c2);
    printf("Difference = %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}
