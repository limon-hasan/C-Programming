#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 4

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row*col);
        }
        printf("\n");
    }

    return 0;
}
