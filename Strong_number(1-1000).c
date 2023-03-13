#include<stdio.h>         // Strong number hocche oi number er digit gular factorial er sum jodi number er shathe mile jay tahole number ta strong number hobe
int main()
{
    int j,first,last,temp,r,sum=0;
    printf("Enter first number = ");
    scanf("%d",&first);
    printf("Enter last number = ");
    scanf("%d",&last);

    for(j=first; j<=last; j++)
    {
        temp = j;
        while(temp!=0)
        {
            r = temp%10;
            int fact =1;
            for(int i=1; i<=r; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            temp = temp/10;
        }
        if(j==sum)
            printf("%d ",j);
        sum=0;
    }
    return 0;
}
