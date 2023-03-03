#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 5

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
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
