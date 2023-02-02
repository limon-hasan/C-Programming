#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        printf("Large is = %d",num1);
    }
    else if(num1<num2)
    {
        printf("Large is = %d",num2);
    }
    else
    {
        printf("Numbers are equal");
    }
return(0);
}
