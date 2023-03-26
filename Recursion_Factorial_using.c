#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);

    int result = fact(x);
    printf("The factorial of %d is %d",x,result);

    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
