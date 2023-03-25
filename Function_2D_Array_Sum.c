#include<stdio.h>
int col_length =5;
int sum_array(int array[][col_length],int size);

int main()
{
    int a[3][5];
    printf("Enter the elements of the array :\n");
    for(int i=0; i<3; i++)
    {
        printf("Enter row %d : ",i+1);
        for(int j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The sum of the elements of the array %d",sum_array(a,3));
}

int sum_array(int array[][col_length],int size)
{
int sum=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<col_length; j++)
        {
           sum = sum + array[i][j];
        }
    }
    return sum;
}


Or-----------------------------------------------
  
  
#include<stdio.h>
#define row_size 3
#define col_size 5
int sum_array(int array[][col_size],int size);
int main()
{
    int a[3][5];
    for(int i=0; i<3; i++)
    {
        printf("Enter row %d : ",i+1);
        for(int j=0; j<5; j++){
            scanf("%d",&a[i][j]);
        }
    }
printf("The sum of the elements of array is %d",sum_array(a,7));
}

int sum_array(int array[][col_size],int size)
{
    int sum=0;
    for(int k=0; k<row_size; k++)
    {
        for(int p=0; p<col_size; p++)
        {
             sum = sum+array[k][p];
        }
    }
        return sum;
}
  
