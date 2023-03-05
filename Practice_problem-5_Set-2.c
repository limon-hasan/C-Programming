#include<stdio.h>
int main()
{
    int num,sum,temp,lastDigit;
    printf("Enter a number  = ");
    scanf("%d",&num);   //num=12345

    temp = num;    // Ekhane first digit er variable ke temp naam disi. temp na diye firstDigit o dewa jabe
    while(temp>=10)
    {
        temp=temp/10;
    }

    lastDigit = num%10;
    sum = temp + lastDigit;
    printf("The sum of first digit and last digit = %d",sum);
}
