#include<stdio.h>
int main()
{
    int x=2;
    if(x--)
        printf("1\n");
    if(x--)
        printf("2\n");
    if(x--)
        printf("3\n");
    if(x--)
        printf("None\n");

    printf("%d",x);
}
