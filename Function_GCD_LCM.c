#include<stdio.h>

void gcd_lcm(int x, int y, int r);

int main()
{
    int num1,num2,rem;
    printf("Enter number1 = ");
    scanf("%d",&num1);
    printf("Enter number2 = ");
    scanf("%d",&num2);

    gcd_lcm(num1,num2,rem);

    return 0;
}

void gcd_lcm(int x, int y, int r)
{
    int n1=x;
    int n2=y;
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }

    int GCD = n1;
    int LCM = (x*y)/GCD;

    printf("GCD = %d\n",GCD);
    printf("LCM = %d",LCM);

}
