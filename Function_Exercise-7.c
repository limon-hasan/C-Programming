#include<stdio.h>

int func(int row, int col, int Arr[row][col]);

int main()
{
    int m,n;
    printf("Enter m & n = ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("Enter elements :");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    func(m,n,A);

    return 0;
}

int func(int row, int col, int Arr[row][col])
{
    printf("\nRow totals : ");
    for(int i=0; i<row; i++)
    {
     int row_sum = 0;
        for(int j=0; j<col; j++)
        {

            row_sum+=Arr[i][j];
        }
        printf("Sum = %d\n",row_sum);
    }

    printf("\nColumn totals : ");

    for(int i=0; i<row; i++)
    {
     int col_sum = 0;
        for(int j=0; j<col; j++)
        {

            col_sum+=Arr[j][i];
        }
        printf("Sum = %d\n",col_sum);
    }

}
