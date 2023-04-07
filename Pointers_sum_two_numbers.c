#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;
    printf("Sum is %d",sum);

    return 0;
}
