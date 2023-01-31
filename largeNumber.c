#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter First number = ");
    scanf("%d",&num1);

    printf("Enter Second number = ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("Large is = %d\n",num1);
    }
    if(num1<num2)
    {
        printf("Large is = %d\n",num2);
    }
    if(num1==num2)
    {
        printf("Both are equal\n");
    }
    if(num1!=num2)
    {
        printf("Both are not equal\n");
    }

    return(0);
}
