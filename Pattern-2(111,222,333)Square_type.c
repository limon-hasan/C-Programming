#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 5

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }

    return 0;
}
