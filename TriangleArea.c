//Write a program that takes that calculates the area of triangles
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Base is = ");
    scanf("%f",&base);

    printf("Height is = ");
    scanf("%f",&height);

    area = 1/(float)2 * base * height;
    printf("Area of triangle is = %.1f\n",area);


    return 0;
}
