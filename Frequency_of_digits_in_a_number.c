#include <stdio.h>   // frequency of a digit bolte bujhay suppose ekta number jodi 122355 hoy ebong ei digit gular moddhe jodi bole 5 kotobar ase tahole oita hocche 5 er frequency
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
