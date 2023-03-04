#include <stdio.h>     // Perfect number hocche oi nij number baad e oi number er factor gulor sum jodi oi number er same hoy.
int main()
{
    int i,n,sum=0;

    printf("Enter Number = ");
    scanf("%d",&n);  //n=6

    for(i=1; i<=n-1; i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
    printf("Sum is = %d\n",sum);
    if(n==sum)
        printf("%d is a perfect number\n",n);
    else
        printf("%d is not a perfect number\n",n);
 
    return 0;
}
