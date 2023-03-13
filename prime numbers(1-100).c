#include<stdio.h>
int main()
{
    int j,n,p;
    printf("Enter range = ");
    scanf("%d",&p);

    for(n=2; n<=p; n++)
    {
        for(j=2; j<n; j++)
        {
            if(n%j==0)
                break;
        }

        if(j==n)
            printf("%d ",n);
    }
}
