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
