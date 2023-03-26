#include<stdio.h>
int main()
{
    int x;
    printf("Enter a positive number = ");
    scanf("%d",&x);

    int result = sum(x);
    printf("The Sum of the %d numbers = %d",x,result);

    return 0;
}

int sum(int n)
{
    if(n!=0)
        return n+sum(n-1);
    else
        return n;

}
