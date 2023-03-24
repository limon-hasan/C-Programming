#include<stdio.h>

void array(int num[])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[]={10,20,30,40,50};

    array(a);

}

