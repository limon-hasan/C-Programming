#include<stdio.h>        // Check Second highest value
#include<limits.h>
int main()
{
    int a[100],i,n,l1,l2;  // l1 = Highest value, l2 = second highest value
    printf("How many numbers = ");
    scanf("%d",&n);

    printf("Enter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    l1 = INT_MIN;
    l2 = INT_MIN;

    for(i=0; i<n; i++)
    {
        if(a[i]>l1)
        {
            l2 = l1;
            l1 = a[i];
        }
        else if(a[i]<l1 && a[i]>l2)
            l2 = a[i];
    }

    printf("\nFirst Largest value = %d",l1);
    printf("\nSecond Largest value = %d",l2);

}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>        // Check Second smallest value
#include<limits.h>
int main()
{
    int a[100],i,n,l1,l2;  // l1 = Smallest value, l2 = Second smallest value
    printf("How many numbers = ");
    scanf("%d",&n);

    printf("Enter the numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    l1 = INT_MAX;
    l2 = INT_MAX;

    for(i=0; i<n; i++)
    {
        if(a[i]<l1)
            {
                l2 = l1;
            l1 = a[i];
            }
            else if(a[i]>l1 && a[i]<l2)
                l2 = a[i];
    }

    printf("\nFirst Smallest value = %d",l1);
    printf("\nSecond smallest value = %d",l2);

}
