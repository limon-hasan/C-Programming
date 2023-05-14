#include <stdio.h>
#define ROWS 3
#define COLS 3

void multiplyMatrix(int *m1, int*m2,  int *r);

int main()
{
    int matrix1[ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[ROWS][COLS] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int result[ROWS][COLS];

    multiplyMatrix((int*)matrix1, (int*)matrix2, (int*)result);

    printf("A: \n");
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nB: \n ");
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nResult:\n");
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplyMatrix(int *m1, int*m2,  int *r)
{
    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            *(r+i*COLS+j) = 0;
            for(int k=0; k<COLS; k++)
            {
                *(r+i*COLS+j) += *(m1+i*COLS+k)* *(m2+k*COLS+j);
            }
        }
    }
}
