//area = sqrt(s*(s-a)*(s-b)*(s-c))
//s = (a+b+c)/2

#include<stdio.h>
int main()
{
    int a,b,c;
    float s;
    float area;
    printf("Enter values = ");
    scanf("%d %d %d",&a,&b,&c);

    s = (float)(a+b+c)/2;
    area = sqrt (s*(s-a)*(s-b)*(s-c));
    printf("Area is = %f\n",area);


 return 0;
}

OR,


//area = sqrt(s*(s-a)*(s-b)*(s-c))
//s = (a+b+c)/2

#include<stdio.h>
int main()
{
    double a,b,c,s,area;

    printf("Enter values = ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt (s*(s-a)*(s-b)*(s-c));
    printf("Area is = %lf\n",area);


 return 0;
}
