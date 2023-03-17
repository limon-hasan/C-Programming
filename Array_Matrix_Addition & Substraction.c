#include<stdio.h>
int main()
{
    while(1)
    {
        int A[10][10],B[10][10],C[10][10],no_rows,no_cols,i,j;

        printf("Enter rows = ");
        scanf("%d",&no_rows);
        printf("Enter cols = ");
        scanf("%d",&no_cols);

        printf("\n");

        printf("Enter elements for A matrix :\n");
        for(i=0; i<no_rows; i++)
        {
            for(j=0; j<no_cols; j++)
            {
                printf("A[%d][%d] = ",i,j);
                scanf("%d",&A[i][j]);
            }
            printf("\n");
        }

        printf("\nEnter elements for B matrix :\n");
        for(i=0; i<no_rows; i++)
        {
            for(j=0; j<no_cols; j++)
            {
                printf("B[%d][%d] = ",i,j);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }

        printf("\nA = ");
        for(i=0; i<no_rows; i++)
        {
            for(j=0; j<no_cols; j++)
            {
                printf("\t%d ",A[i][j]);
            }
            printf("\n");
        }

        printf("\nB = ");
        for(i=0; i<no_rows; i++)
        {
            for(j=0; j<no_cols; j++)
            {
                printf("\t%d ",B[i][j]);
            }
            printf("\n");
        }

        printf("\nC = ");
        for(i=0; i<no_rows; i++)
        {
            for(j=0; j<no_cols; j++)
            {
                C[i][j] = A[i][j]+B[i][j];
                printf("\t%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    getch();
}
