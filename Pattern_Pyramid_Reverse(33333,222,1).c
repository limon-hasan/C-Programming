#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);  // n = 3

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=(row*2)-1; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }

    return 0;
}
