#include<stdio.h>
int main()
{
    int A[10][10]= {0},I[10][10],i,row,col;
    printf("Enter row and column for A matrix : ");
    scanf("%d %d",&row,&col);

    while(row!=col)
    {
        printf("SORRY!! row and column are not same\n");
        printf("Enter row and column for A matrix : ");
        scanf("%d %d",&row,&col);
    }

    //taking input for A matrix;
    printf("\nEnter elements for A matrix :\n");
    for(i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //printing A matrix
    printf("A :\n");
    for(i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                A[i][j]=1;
            }
            else
                A[i][j]=0;
        }
    }

    // printing Identity matrix
    for(i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

}
