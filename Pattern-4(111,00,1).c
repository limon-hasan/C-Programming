#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 3

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }

    return 0;
}
