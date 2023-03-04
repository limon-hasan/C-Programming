#include<stdio.h>
int main()
{
    int i,first,last,sum=0;
    printf("Enter first value = ");
    scanf("%d",&first);  //first = 100
    printf("Enter last value = ");
    scanf("%d",&last);  // second = 200

    for(i=first; i<=last; i++)
    {
      if(i%9==0)
      {
        sum = sum+i;
        printf("%d ",i);
      }
    }
      printf("\nThe Sum =%d",sum);
    return 0;
}
