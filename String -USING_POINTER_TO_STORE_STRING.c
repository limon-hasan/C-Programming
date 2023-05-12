#include <stdio.h>

int main()
{
    char *strPtr = "Maksudul Hasan";
    char *t = strPtr;

    while(*t!='\0')
    {
        printf("%c",*t);
        t++;
    }
    return 0;
}
