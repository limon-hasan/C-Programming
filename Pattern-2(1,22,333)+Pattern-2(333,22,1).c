#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 3

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)   // n=3
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }

    return 0;
}
