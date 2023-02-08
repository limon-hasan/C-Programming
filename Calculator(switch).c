#include<stdio.h>
int main()
{
    double num1,num2;
    char op;

    printf("Enter an operator (+,-,*,/) = ");              // Ekhane character print agee na niye jodi numbers print agee nei tahole thikmoto run korbe na, shudhu numbers print korbe, character korbe na
    scanf("%c",&op);                                       // Shobshomoy kheyal rakhte hobe je character ar number thakle agee character print korbo, pore number print korbo
    printf("Enter two numbers = ");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
        break;
    case '*':
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
        break;
    case '/':
        printf("%lf / %lf = %lf\n",num1,num2,num1/num2);
        break;
    default:
        printf("Not a valid operator\n");
    }

    return 0;
}
