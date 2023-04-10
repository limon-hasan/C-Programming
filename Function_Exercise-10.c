#include<stdio.h>

int gcd(int a, int b);

int main()
{
    int num1,num2,rem;
    printf("Enter number1 = ");
    scanf("%d",&num1);
    printf("Enter number2 = ");
    scanf("%d",&num2);

    int result = gcd(num1,num2);
    printf("GCD = %d",result);

    return 0;
}

int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    {
     int r=a%b;
     return gcd(b,a%b);
    }

}

