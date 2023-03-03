#include<stdio.h>
int main()
{
    while(1)
    {
        int n,row,col;
        printf("Enter N = ");
        scanf("%d",&n);  // n = 4

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf("%c ",row+64);
            }
            printf("\n");
        }
    }
        return 0;
    }
