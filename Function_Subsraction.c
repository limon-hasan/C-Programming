#include<stdio.h>

void sum(int a,int b, int c)
{
    printf("The SUM is = %d\n",a+b+c);
}

void sub(int a, int b)
{
    printf("Substraction = %d\n",a-b);
}

int main()
{
    sum(10,20,30);
    sum(100,200,300);
    sub(200,50);
}


Or----------------------------------------------------------------
    
    
#include<stdio.h>

int sum(int a, int b, int c)
{
    return a+b+c;
}

int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int result = sum(10,20,30);
    result = sum(100,200,300);
    result = sub(200,50);

    printf("The Sum is = %d\n",sum(10,20,30));
    printf("The Sum is = %d\n",sum(100,200,300));
    printf("The Sub is = %d\n",sub(200,50));
}
    
