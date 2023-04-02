#include<stdio.h>

int del(int arr[], int size) ;

int main()
{
    int A[50],i,n;    // n=5
    printf("Enter the size of the array = ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\n%d",A[i]);
    }

    del(A,n);
    return 0;
}

int del(int arr[], int size)
{
    int pos;
    printf("\nFrom which element you want to delete : ");
    scanf("%d",&pos);  // pos=3

    if(pos<1 || pos>size)
        printf("Invalid Position\n");
    else
        // Deleting the element
        for(int i=pos-1; i<size-1; i++)
        {
            arr[i]=arr[i+1];
        }

    size--;
    // After deleting the element print the array
    printf("Modified array after deleting the element:\n");
    for(int i=0; i<size; i++
    )
    {
        printf("%d ",arr[i]);
    }

}



Or----------------------------------------------------------------


#include<stdio.h>

int main()
{
    int A[50],i,n,pos;    // n=5
    printf("Enter the size of the array = ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\n%d",A[i]);
    }

    printf("\nFrom which element you want to delete : ");
    scanf("%d",&pos);  // pos=3

    if(pos<1 || pos>n)
        printf("Invalid Position\n");
    else
        // Deleting the element
        for(i=pos-1; i<n-1; i++)  // n-1=4
        {
            A[i]=A[i+1];

        }

    n--;     // n = n-1=4
    // After deleting the element print the array
    printf("Modified array after deleting the element:\n");
    for(i=0; i<n; i++)    // n=4
    {
     printf("%d ",A[i]);
    }

    return 0;
    }
