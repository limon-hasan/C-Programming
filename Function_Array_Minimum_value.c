#include<stdio.h>

int minimum(int x[]);

int main()
{
    int num[]= {5,6,-2,4,10,11};

    int result = minimum(num);
    printf("Minimum element = %d",result);

    return 0;
}

int minimum(int x[])
{
    int min= x[0];
    for(int j=1; j<6; j++)
    {
        if(min>x[j])
            min=x[j];
    }
    return min;
}
