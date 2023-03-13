// Write a program that can take some numbers and display maximum

#include<stdio.h>       // Check Maximum
int main()
{
    int num[100],n,i;
    printf("How many numbers = ");
    scanf("%d",&n);  // n=5

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int max=num[0];
    for(i=0; i<n; i++)
    {
        if(max<num[i])
        {
            max = num[i];
        }
    }
    printf("Maximum is = %d",max);
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,      // Check Minimum


#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How many numbers = ");
    scanf("%d",&n);  // n=5

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int min=num[0];
    for(i=1; i<n; i++)
    {
        if(min>num[i])
        {
            min = num[i];
        }
    }
    printf("Minimum is = %d",min);
}
