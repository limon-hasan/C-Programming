#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1+num2+num3;
    avg = (float)sum/3;

    printf("Sum is = %d\n",sum);
    printf("Average is = %.1f\n",avg);

    return 0;
}
