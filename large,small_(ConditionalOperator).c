#include<stdio.h>
int main()
{
    int a,b,AB;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    AB = a>b ? a : b;
    printf("The large number is = %d\n",AB);

    return 0;
}


Or,------------------------------------

#include<stdio.h>
int main()
{
    int a,b,AB;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    AB = a<b ? a : b;
    printf("The small number is = %d\n",AB);

    return 0;
}
