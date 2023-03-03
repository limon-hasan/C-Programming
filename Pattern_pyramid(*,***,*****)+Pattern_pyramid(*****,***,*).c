#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 3

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=(row*2)-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)  // n-1=3-1=2
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=(row*2)-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
