#include<stdio.h>

int calculatePower(int a, int b)
{ 
    int answer =1;
    for(int i=1; i<=b; i++)
    {
        answer = answer*a;
    }
    return answer;
}

int main()
{
    int base,power;
    printf("Enter base = ");
    scanf("%d",&base);
    printf("Enter power = ");
    scanf("%d",&power);

    int result = calculatePower(base,power);
    printf("%d to the power %d = %d",base,power,result);
}


Or-------------------------------------------------------
    
    
#include<stdio.h>

void calculatePower(int a, int b)

{
    int answer =1;
    for(int i=1; i<=b; i++)
    {
        answer = answer*a;
    }
    printf("%d to the power %d is %d",a,b,answer);
}

int main()
{
    int base,power;
    printf("Enter base = ");
    scanf("%d",&base);
    printf("Enter power = ");
    scanf("%d",&power);

    calculatePower(base,power);

}
    

Or----------------------------------------------
    
#include<stdio.h>

void calculatePower(int a, int b)

{
    int answer =1;
    for(int i=1; i<=b; i++)
    {
        answer = answer*a;
    }
    printf("%d to the power %d is %d\n",a,b,answer);
}

int main()
{

    calculatePower(5,3);
    calculatePower(3,3);
    calculatePower(6,3);
    calculatePower(2,3);

}
