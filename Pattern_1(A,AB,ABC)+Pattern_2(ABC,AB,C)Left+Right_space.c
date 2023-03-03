#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 3

    for(row=1; row<=n; row++)
    {
        // printing space
        for(col=1; col<=n-row; col++) // Ekhane space er value hobe joto number row te ashi n theke oi number ta minus korbo
        {
            printf(" ");
        }

        // printing number
        for(col=1; col<=row; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)  // n-1 = 3-1=2
    {
        // printing space
        for(col=1; col<=n-row; col++) // Ekhane space er value hobe joto number row te ashi n theke oi number ta minus korbo
        {
            printf(" ");
        }

        // printing number
        for(col=1; col<=row; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }

    return 0;
}
