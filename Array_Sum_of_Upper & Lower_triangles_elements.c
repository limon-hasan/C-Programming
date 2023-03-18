#include<stdio.h>
int main()
{
    int A[3][3],i,j,lowersum=0,uppersum=0;

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

    printf("\nUpper elements : ");
    // Sum of upper elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                uppersum = uppersum + A[i][j];
                printf("%d ",A[i][j]);
            }
        }
    }
     printf("\nSum of upper elements = %d",uppersum);

      printf("\n\nLower elements : ");
    // Sum of lower elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>j)
            {
                lowersum = lowersum + A[i][j];
                printf("%d ",A[i][j]);
            }
        }
    }
     printf("\nSum of lower elements = %d",lowersum);
}
