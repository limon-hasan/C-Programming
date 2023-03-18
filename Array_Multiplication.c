#include<stdio.h>
int main()
{
    while(1)
    {
        int first[10][10],second[10][10],r1,r2,c1,c2,i,j,k,sum=0,result[10][10];

        printf("Enter rows and columns of first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and columns of second matrix : ");
        scanf("%d %d",&r2,&c2);

        while(c1!=r2)
        {
            printf("Error !! column of first matrix not equal to row of second matrix\n");

            printf("Enter rows and columns of first matrix : ");
            scanf("%d %d",&r1,&c1);

            printf("Enter rows and columns of second matrix : ");
            scanf("%d %d",&r2,&c2);
        }

        // taking input for first matrix
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("First[%d][%d] = ",i,j);
                scanf("%d",&first[i][j]);
            }
            printf("\n");
        }

        // taking input for second matrix
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("Second[%d][%d] = ",i,j);
                scanf("%d",&second[i][j]);
            }
            printf("\n");
        }

        // taking input for result matrix
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<r2; k++)        // ekhane r2 na diye c1 dileo hobe. karon r2=c1
                {
                    sum = sum + first[i][k] * second[k][j];
                }
                result[i][j] = sum;
                sum=0;
            }
            printf("\n");
        }


        // printing first matrix
        printf("\n\nFirst Matrix :\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d ",first[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        // printing second matrix
        printf("\nSecond Matrix :\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",second[i][j]);
            }
            printf("\n");
        }

         // printing result matrix
          printf("\nResult Matrix :\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
