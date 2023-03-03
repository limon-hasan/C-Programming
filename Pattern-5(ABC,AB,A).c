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
            printf("%c ",col+64);     // col+96 diye korle choto hater letter gula show korbe
        }
        printf("\n");
    }

    return 0;
}
