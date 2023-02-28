#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;      // Ekhane variable er nam sum na niye revised_number o newa jabe
    printf("Enter a number = ");
    scanf("%d",&num);  //num = 546
    temp=num;

    while(temp!=0)
    {
        r = temp%10;
        sum = sum*10+r;      // Ekhane variable er nam sum na niye revised_number o newa jabe
        temp = temp/10;
    }
    printf("The revised number is = %d",sum);  // sum = 645

    return 0;
}
