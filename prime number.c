#include<stdio.h>
int main()
{
    int num,i,count=0;   // Ekhane variable er nam count na diye onno jekono nam dite partam
    printf("Enter any positive number = ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}



Or-------------------------------------------------------------

    

#include <stdio.h>
int is_prime(int n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n==0)
            break;

        if(1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}
