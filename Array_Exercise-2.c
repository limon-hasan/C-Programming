#include<stdio.h>
int main()
{
    int num,i,a[10]= {0},temp,digit;
    printf("Enter a number = ");
    scanf("%d",&num);


    for(i=0; i<10; i++)
    {
        temp=num;
        while(temp!=0)
        {
            digit=temp%10;
            if(digit==i)
                a[i]++;
            temp=temp/10;
        }
        printf("The frequency of %d is %d\n",i,a[i]);
    }

}
