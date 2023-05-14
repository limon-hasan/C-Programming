#include <stdio.h>

void max_min(int x, int ARR[],int *a,int *b);

int main()
{
    int n, A[n], big, small;
    printf("Enter numbers = ");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
         scanf("%d",&A[i]);
    }
    
    max_min(n, A, &big, &small);
    printf("Largest = %d\n",big);
    printf("Smallest = %d\n",small);

    return 0;
}

void max_min(int x, int ARR[],int *a,int *b)
{
     int i;
     *a = *b = ARR[0];

     for(i=1; i<x; i++)
     {
         if(ARR[i] > *a)
          *a = ARR[i];
         else if(ARR[i] < *b)
          *b = ARR[i];
     }
}
