#include<stdio.h>
int swapping(int a, int b);
int main()
{
    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);

    swapping(x,y);
  
    return 0;
}

int swapping(int a, int b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
   
    printf("After swapping :\n");
    printf("The value of x = %d\n",a);
    printf("The value of y = %d",b);
}
