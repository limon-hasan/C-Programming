#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} complex;

int main()
{
    complex c1, c2, result;
    printf("For first part:\n");
    printf("Enter real part = ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part = ");
    scanf("%f", &c1.imag);

    printf("For Second part:\n");
    printf("Enter real part = ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part = ");
    scanf("%f", &c2.imag);

    addNumbers(c1, c2, &result);

    printf("\nReal part = %f",result.real);
    printf("\nImaginary part = %f",result.imag);

    return 0;
}

void addNumbers(complex a, complex b, complex* r)
{
    r->real = a.real + b.real;
    r->imag = a.imag + b.imag;
}
