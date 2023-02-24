#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year = ");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap Year");
    }
    if(year%4==0 && year%100!=0)
    {
        printf("Leap Year");
    }
     else
    {
        printf(" Not Leap Year");
    }
    getch();
}


Or---------------------------------
    
    
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year = ");
    scanf("%d",&year);
    
    if(year%400==0 || year%4==0 && year%100!=0)
        printf("Leap Year");

    else
        printf(" Not Leap Year");
    getch();
}
