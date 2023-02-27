#include<stdio.h>
int main()
{
    float radius,base,height,length,width,area_circle,area_triangle,area_rectangle;
    int choice;

    printf("Enter a Choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter a radius = ");
        scanf("%f",&radius);
        area_circle = 3.1416*radius*radius;
        printf("The area of Circle = %f\n",area_circle);
        break;

    case 2:
        printf("Enter a base = ");
        scanf("%f",&radius);
        printf("Enter a height = ");
        scanf("%f",&height);
        area_triangle = 0.5*base*height;
        printf("The area of Triangle = %f\n",area_triangle);
        break;

    case 3:
        printf("Enter a length = ");
        scanf("%f",&length);
        printf("Enter a width = ");
        scanf("%f",&width);
        area_rectangle = length*width;
        printf("The area of Rectangle = %f\n",area_rectangle);
        break;
    default:
        printf("Not in any choice");
    }
    return 0;
}
