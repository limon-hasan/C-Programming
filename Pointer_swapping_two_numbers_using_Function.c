#include<stdio.h>

void swapping(int *p1, int *p2);

int main()
{
    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    printf("Before swapping : x = %d, y = %d\n",x,y);

    swapping(&x,&y);

    printf("After swapping : x = %d, y = %d\n",x,y);

    return 0;
}

void swapping(int *p1, int *p2)
{
    int temp;

    // swapping
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
