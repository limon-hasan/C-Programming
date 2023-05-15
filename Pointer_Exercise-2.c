#include <stdio.h>

void copyArray(int *a, int *b);

int main()
{
    int A[5] = {1,4,8,2,0};
    int B[5];
    // size = sizeof(A)/ sizeof(A[0])    Loop er vitore 5 na likhe evabe size ber kore size likhleo hobe

    copyArray(A,B);
    printf("Array A: \n");
    for(int i=0; i<5; i++)
    {
     printf("%d ",A[i]);
    }

    printf("\nArray B: \n");
    for(int i=0; i<5; i++)
    {
     printf("%d ",B[i]);
    }
    return 0;
}

void copyArray(int *a, int *b)
{
    for(int i=0; i<5; i++)
    {
        *(b+i) = *(a+i);   // b[i] = a[i] --->  Eivabeo lekha jabe
    }
}
