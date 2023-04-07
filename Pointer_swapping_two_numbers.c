#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    // swapping
    temp = *ptr1;
    x = *ptr2;
    y = temp;

    printf("After swapping :\n");
    printf("x = %d\n",x);
    printf("y = %d",y);

    return 0;
}
