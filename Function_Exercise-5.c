#include<stdio.h>

int OCCURRENCE(int ARRAY[], int a);

int main()
{
    int A[5],num,n;

    printf("Enter elements : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the number = ");
    scanf("%d",&num);

    int result = OCCURRENCE(A,num);
    printf("Enter the occurrences of %d is %d",num,result);

    return 0;
}

int OCCURRENCE(int ARRAY[], int a)
{
    int count=0;
    for(int i=0; i<5; i++)
    {
        if(a==ARRAY[i])
            count++;
    }

    return count;

}


Or------------------------------------------------------------------------------


#include<stdio.h>

void OCCURRENCE(int a, int b, int ARRAY[]);

int main()
{
    int A[100],i,n,num;
    printf("How many range = ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the number = ");
    scanf("%d",&num);

    OCCURRENCE(n,num,A);

    return 0;
}

void OCCURRENCE(int a, int b, int ARRAY[])
{
    int count=0;

    for(int i=0; i<a; i++)
    {
        if(b==ARRAY[i])
            count++;
    }

    printf("Enter the occurrences of %d is %d",b,count);

}
