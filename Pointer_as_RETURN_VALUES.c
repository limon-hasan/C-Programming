#include <stdio.h>

int* find_max(int *a, int *b);

int* find_max(int *a, int *b)
{
    if(*a > *b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, *max;
    printf("The value of x = ");
    scanf("%d",&x);
    printf("The value of y = ");
    scanf("%d",&y);

    max = find_max(&x,&y);
    printf("Max element is %d",*max);

    return 0;
}
