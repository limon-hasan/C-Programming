// Check Armstrong number between 1 to 1000 and show that 
// 1 theke 1000 porjonto jei number gula Armstrong sheigula print korte hobe

#include<stdio.h>                  // Armstrong number holo ekta mumber er prottek digit er cube er total sum oi number er same hobe
int main()
{
    int i,initialNum,finalNum,r,sum=0,temp;
    printf("Initial value = ");
    scanf("%d",&initialNum);     // num=153
    printf("Final value = ");
    scanf("%d",&finalNum);

    for(i=initialNum; i<=finalNum; i++)
    {
        temp=i;

        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        printf("%d\n",sum);

        if(i==sum)
            printf("%d",i);
    }

    sum=0;
}
