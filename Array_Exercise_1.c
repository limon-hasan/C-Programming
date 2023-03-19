#include<stdio.h>
int main()
{
    int A[100],i,n,value,count=0;

    printf("Enter the total numbers i want = ");
    scanf("%d",&n);
    printf("Enter the inputs : ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the given number = ");
    scanf("%d",&value);

    for(i=0; i<n; i++)
    {
        if(value==A[i])
        count++;
    }

    printf("The number of times of %d is %d",value,count);

}
