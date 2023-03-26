#include<stdio.h>

int sum_array(int row_size,int col_size,int arr[row_size][col_size]);

int main()
{
    int m,n;
    printf("Enter row size = ");
    scanf("%d",&m);
    printf("Enter column size = ");
    scanf("%d",&n);

    int a[m][n];

    printf("The Sum of the elements of the array is %d",sum_array(m,n,a));      // Function call korar shomoy array er shudhu nam that's maean a dite hobe mane a[][] dewa jabe na

}

int sum_array(int row_size,int col_size,int arr[row_size][col_size])
{
    for(int i=0; i<row_size; i++)
    {
        printf("Enter row %d : ",i+1);
        for(int j=0; j<col_size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;
    for(int i=0; i<row_size; i++)
    {
        for(int j=0; j<col_size; j++)
        {
         sum = sum+arr[i][j];
        }
    }
    return sum;
}


Or------------------------------------------------------
    
    
#include<stdio.h>

int sum_array(int row_size,int col_size,int arr[row_size][col_size]);

int main()
{
    int m,n;
    printf("Enter row size = ");
    scanf("%d",&m);
    printf("Enter column size = ");
    scanf("%d",&n);

    int a[m][n];

    for(int i=0; i<m; i++)
    {
        printf("Enter row %d : ",i+1);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The Sum of the elements of the array is %d",sum_array(m,n,a));

}

int sum_array(int row_size,int col_size,int arr[row_size][col_size])
{


    int sum=0;
    for(int i=0; i<row_size; i++)
    {
        for(int j=0; j<col_size; j++)
        {
         sum = sum+arr[i][j];
        }
    }
    return sum;
}
    
