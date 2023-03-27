#include<stdio.h>

int exponent(int p);
int factorial(int q);

int main()
{
    int x,n;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter n = ");
    scanf("%d",&n);

    int sum=1;
    for(int i=1; i<=n; i++)
    {
        sum = sum + exponent(i)/factorial(i);
    }

    printf("Sum = %d",sum);
    return 0;
}

int exponent(int p)
{
    int power = 1,x;

    for(int j=1; j<=p; j++)
    {
        power = power*x;
    }
    return power;
}

int factorial(int q)
{
    int fact =1;
    for(int k=1; k<=2*q; k++)
    {
        fact = fact*k;
    }
    return fact;
}
