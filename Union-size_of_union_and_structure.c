#include<stdio.h>

union test1
{
    int x,y;
};

union test2
{
    double ch;
    int x;
};

union test3
{
    char name;
    double d;
};

struct test4
{
 int x;
 int y;
 char ch;
 float f;
 double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("size of t1 = %d\n",sizeof(t1));
    printf("size of t2 = %d\n",sizeof(t2));
    printf("size of t3 = %d\n",sizeof(t3));
    printf("size of t4 = %d\n",sizeof(t4));    //Ekhane structure er khetre shobgula member er alada alada kore sum korar poreo compiler extra 3 jog kore shathe abar 

}
