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
            printf("%c ",col+64);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)   // n = 3-1=2
    {                             // A = 65
        for(col=1; col<=row; col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }

    return 0;
}
