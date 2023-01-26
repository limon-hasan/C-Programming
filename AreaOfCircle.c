#include<stdio.h>
int main()
{
    int r;
    double area;
    printf("Enter the radius = ");
    scanf("%d",&r);

    area = 3.1416 * r *r;
    printf("Area of circle is = %lf",area);

 return 0;
}

OR,

#include<stdio.h>
int main()
{
    float r, area;
    printf("Enter the radius = ");
    scanf("%f",&r);

    area = 3.1416 * r *r;
    printf("Area of circle is = %f",area);

 return 0;
}
