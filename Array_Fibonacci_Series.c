#include<stdio.h>
int main()
{
    int a[30],n,i;
    printf("How many fibonacci numbers = ");
    scanf("%d",&n); // n=6;

    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
