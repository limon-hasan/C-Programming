#include <stdio.h>
int main()
{
    int num,d,count,r,temp;
    printf("Enter a number = ");
    scanf("%d",&num);  // num = 12131
     printf("Enter a digit = ");
    scanf("%d",&d);  // d=1

    temp=num;
    while(temp!=0)
    {
        r = temp%10;
        if(r==d)
            count++;
        temp=temp/10;
    }
   printf("The frequency of %d = %d",d,count); // d=1, count = 3, 
}
