#include<stdio.h>
int main()
{
    int num1,num2,rem;
    printf("Enter number1 = ");
    scanf("%d",&num1);
    printf("Enter number2 = ");
    scanf("%d",&num2);

    int n1=num1;
    int n2=num2;
    while(n2!=0)
    {
       rem=n1%n2;
       n1=n2;
       n2=rem;
    }

    int GCD = n1;
    int LCM = (num1*num2)/GCD;

    printf("GCD = %d\n",GCD);
    printf("LCM = %d",LCM);

    return 0;
}
