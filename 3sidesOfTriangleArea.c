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
