#include <stdio.h>

int main()
{
    int i,x,y,value=1;  //x=4, y=3

    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);
    for(i=1; i<=y; i++)
    {
        value = value*x;
    }
    printf("Power of x = %d",value);

    return 0;
}
