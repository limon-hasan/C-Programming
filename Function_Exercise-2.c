#include<stdio.h>
int main()
{
    int p,q,r;
    printf("Enter p = ");
    scanf("%d",&p);
    printf("Enter q = ");
    scanf("%d",&q);
    printf("Enter r = ");
    scanf("%d",&r);

    check(p,q,r);

    return 0;
}

int check(int x,int y,int n)
{
    if(0<x<n-1 && 0<y<n-1)
        return 1;
    else
        return 0;
}
