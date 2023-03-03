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
                printf("%d ",row%2);  // Ekhane pattern (1,22,333) er proti ta col er value ke 2 diye vag korle remainder e hobe new pattern er proti ta number 
            }
            printf("\n");
        }
    }
        return 0;
    }

