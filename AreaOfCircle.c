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

OR,


#include<stdio.h>
#include<math.h>
int main()
{
    float r, area;
    printf("Enter the radius = ");
    scanf("%f",&r);

    area = M_PI * r *r;
    printf("Area of circle is = %.2f",area);

 return 0;
}
