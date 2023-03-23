#include<stdio.h>

int square(int a);          // function prototype

int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    int value = square(num);
}

int square(int a)
{
    printf("The value of %d is %d",a,a*a);
}


Or------------------------------------------------------
    
#include<stdio.h>

int square(int a);          // function prototype    
    
int square(int a)
{
printf("The value of %d is %d",a,a*a);
}

int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    int value = square(num);
}


or-----------------------------------------------------------------
    
    
#include<stdio.h>
    
int square(int a);          // function prototype

int square(int a)
{
   int sq = a*a;
    return sq;
}

int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    int value = square(num);
    printf("The square of %d is %d",num,value);
}
   
