#include<stdio.h>                  // Armstrong number holo ekta mumber er prottek digit er cube er total sum oi number er same hobe
int main()
{
        int num,r,sum=0,temp;
        printf("Enter a number = ");
        scanf("%d",&num);     // num=153
        temp=num;

        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        printf("%d\n",sum);   // sum=153

        if(num==sum)
            printf("Armstrong number\n");
        else
            printf("Not Armstrong number\n");
}
