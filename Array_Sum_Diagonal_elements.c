#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;

    // taking input for A matrix
    printf("Enter the elements for the matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // printing A martrix
    printf("A Matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    printf("\nDiagonal elements :");
    // Sum of diagonal elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                sum = sum + A[i][j];
                printf("%d ",A[i][j]);
            }
        }
    }
     printf("\n\nSum of diagonal elements = %d",sum);
}
