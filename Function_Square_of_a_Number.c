#include<stdio.h>
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

