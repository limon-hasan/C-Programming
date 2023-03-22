#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()      // Upore jotoi onno user defined function thakuk na keno program always main function thekei shuru hobe
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);

    printf("The sum is = %d",sum(num1,num2));
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);


    printf("The sum is = %d",sum(num1,num2));
}

int sum(int a,int b)
{
    return a+b;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);


    printf("The sum is = %d",sum(num1,num2));
}

int sum(int a,int b)
{
    int total = a+b;
    return total;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2);

    printf("The sum is = %d",result);
}

int sum(int a,int b)
{
    int total = a+b;
    return total;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>

int sum(int a,int b)
{
    int total = a+b;
    return total;
}

int main()
{
    int num1,num2;

    int result = sum(5,6);

    printf("The SUM is = %d\n",result);

    result = sum(5,10);

    printf("The SUM is = %d\n",result);
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>

int sum(int a,int b)
{
    int total = a+b;
    return total;
}

int main()
{

    printf("The SUM is = %d\n",sum(10,20));

    printf("The SUM is = %d\n",sum(10,30));
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,       // 3 numbers

#include<stdio.h>

int sum(int a,int b, int c)
{
    int total = a+b+c;
    return total;
}

int main()
{

    printf("The SUM is = %d\n",sum(10,20,30));

    printf("The SUM is = %d\n",sum(10,30,40));
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>

void sum(int a,int b, int c)
{
    printf("The SUM is = %d",a+b+c);
}

int main()
{
    sum(10,20,30);
}
