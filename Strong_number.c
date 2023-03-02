#include<stdio.h>         // Strong number hocche oi number er digit gular factorial er sum jodi number er shathe mile jay tahole number ta strong number hobe
int main()
{
    int num,temp,r,fact,sum=0,i;
    printf("Enter a number = ");
    scanf("%d",&num);  // num = 145
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        fact = 1;
        for(i=1; i<=r; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if(num==sum)       // sum = 145
        printf("%d is a Strong Number",num);
    else
        printf("%d is Not a Strong Number",num);
    return 0;
}
