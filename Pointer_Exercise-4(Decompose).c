#include<stdio.h>

void decompose(double n, int *integer, double *fractional);

int main()
{
    double num = 3.14156789;
    int intpart;
    double dblpart;

    decompose(num, &intpart, &dblpart);
    printf("Number = %lf\n",num);
    printf("Integer part = %d\n",intpart);
    printf("Fractional part = %lf",dblpart);
    return 0;

}

void decompose(double n, int *integer, double *fractional)
{
    *integer = (int)n;
    *fractional = n - *integer;
}
