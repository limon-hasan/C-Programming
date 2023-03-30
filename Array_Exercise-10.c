#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the size of the matrix : ");
    scanf("%d %d",&m,&n);
    int A[m][n];

    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
         printf("A[%d][%d]",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    int count=1;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i==j && A[i][j]!=1)
            {
                count=0;
                break;
            }
            else if (i!=j && A[i][j]!=0)
            {
                count=0;
                break;
            }
        }

        if(count==0)
            break;

    }

    if(count==1)
        printf("\nThis is an identity matrix\n");
    else

        printf("This is not an identity matrix\n");


    return 0;
}
