#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the range = ");
    scanf("%d",&n);

    for(i=2; i*i<=n; i+=2)
        printf("%d ",i*i)

    }
