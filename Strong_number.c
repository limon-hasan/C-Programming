#include<stdio.h>         // Strong number hocche oi number er digit gular factorial er sum jodi number er shathe mile jay tahole number ta strong number hobe
int main()
{
    int num,temp,r,fact,sum=0,i;
    printf("Enter a number = ");
    scanf("%d",&num);  // num = 145
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        fact = 1;
        for(i=1; i<=r; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if(num==sum)       // sum = 145
        printf("%d is a Strong Number",num);
    else
        printf("%d is Not a Strong Number",num);
    return 0;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include <stdio.h>   // frequency of a digit bolte bujhay suppose ekta number jodi 122355 hoy ebong ei digit gular moddhe jodi bole 5 kotobar ase tahole oita hocche 5 er frequency
int main()
{
    int num,r,temp,i,freq;
    printf("Enter a number = ");
    scanf("%d",&num);  // num = 122355

    for(i=0; i<10; i++)
    {
        freq=0;
        temp=num;
        while(temp!=0)
        {
            r = temp%10;
            if(i==r)
            {
                freq++;
            }
            temp=temp/10;
        }
        printf("The frequency of %d = %d\n",i,freq);
    }

}
