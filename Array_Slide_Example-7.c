#include<stdio.h>
int main()
{
    int A[5][5],sum=0,i,j;
    
    for(i=0; i<5; i++)
    {
      printf("Enter row %d : ",i+1);
        scanf("%d %d %d %d %d",&A[i][0],&A[i][1],&A[i][2],&A[i][3],&A[i][4]);
    }

    printf("\nRow totals : ");
    for(i=0; i<5; i++)
    {
        sum = sum + A[i][0]+A[i][1]+A[i][2]+A[i][3]+A[i][4];    // sum = A[i][0]+A[i][1]+A[i][2]+A[i][3]+A[i][4]; Evabeo lekha jaito  
        printf("%d ",sum);
        sum=0;
    }

  printf("\nColumn totals : ");
    for(j=0; j<5; j++)
    {
        sum = sum + A[0][j]+A[1][j]+A[2][j]+A[3][j]+A[4][j];
        printf("%d ",sum);
        sum=0;
    }
}
