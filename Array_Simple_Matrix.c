#include<stdio.h>
int main()
{
    int A[3][4],B[3][4];
    int i,j;

    // scanning A matrix
    printf("Enter elements for A matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // printing A matrix
    printf("A = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    // scanning B matrix
    printf("\nEnter elements for B matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    // printing B matrix
    printf("B = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t");
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
