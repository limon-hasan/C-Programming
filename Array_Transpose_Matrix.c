#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],i,j,row,col;

    printf("Enter rows and columns of A matrix : ");
    scanf("%d %d",&row,&col);  //row=3, col=2

    // taking input for A matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // transposing A matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    
    // printing A martrix
    printf("A :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    // printing transpose martrix
    printf("Transpose :\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);

        }
        printf("\n");
    }
}
