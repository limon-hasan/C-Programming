#include<stdio.h>
int main()
{
    int num,r,temp,sum=0,value,last;
    printf("Enter a number  = ");
    scanf("%d",&num);  //num =638

    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

    value = sum;
    while(value!=0)
    {
        last = value%10;
        value = value/10;

        switch(last)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
}
