//Write a program that takes two integers and display sum
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("The sum is = %d\n",sum);

    avg = (float)sum/2; //type casting
    printf("The average is = %.1f\n",avg);

return 0;
}



