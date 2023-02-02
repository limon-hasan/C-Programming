//input num
// positive/negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number = ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("positve");
    }
    else if(num<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    return(0);
}
