(1)_____________________________________________________
    
    
#include<stdio.h>
int main()
{
    double num1,num2;                  // Ekhane double type newa tai convenient, float type o newa jete pare
    char op;

    printf("Enter an operator (+,-,*,/) = ");              // Ekhane character print agee na niye jodi numbers print agee nei tahole thikmoto run korbe na, shudhu numbers print korbe, character korbe na
    scanf("%c",&op);                                       // Shobshomoy kheyal rakhte hobe je character ar number thakle agee character print korbo, pore number print korbo
    printf("Enter two numbers = ");
    scanf("%lf %lf",&num1,&num2);                          // Ar jodi character age print na kore number e print korte chai tahole input newar shomoy ektu space dite hobe
                                                           // Jemon [scanf(" %c",&op)] ekhane %c er age space diyechi. Evabe diye korleo hobe. 
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


(2)______________________________________________________

    
#include<stdio.h>
int main()
{
    float num1,num2,p,q,r,t;
    char ch;

    printf("Enter any operator (+,-,*,/) = ");
    scanf("%c",&ch);
    printf("Enter two numbers = ");
    scanf("%f %f", &num1,&num2);

    p=num1+num2;
    q=num1-num2;
    r=num1*num2;
    t=num1/num2;

    switch(ch)
    {
        case '+':
        printf("%f + %f = %f\n",num1,num2,p);
        break;
        case '-':
        printf("%f - %f = %f\n",num1,num2,q);
        break;
        case '*':
        printf("%f * %f = %f\n",num1,num2,r);
        break;
        case '/':
        printf("%f / %f = %f\n",num1,num2,t);
        break;
        default:
        printf("Not a valid operator\n");
    }
    return 0;
}
