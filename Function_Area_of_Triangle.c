#include<stdio.h>

double area(double a, double b);

double area(double a, double b)
{
    double total = 0.5*a*b;
    return total;
}

int main()
{
    double base,height;
    printf("Enter base and height = ");
    scanf("%lf %lf",&base,&height);

    double result = area(base,height);
    printf("The area of triangle is %.2lf",result);
}

