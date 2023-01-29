#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("%.1f",result);
return 0;
}

OR-----------
    
    
#include<stdio.h>
int main()
{
    double result = pow(5,2);
    printf("%lf",result);
    return 0;
}
