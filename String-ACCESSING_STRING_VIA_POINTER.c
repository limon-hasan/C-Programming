#include <stdio.h>

int main()
{
    char str[] = "Maksudul Hasan Limon";
    char *ptr = str;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return 0;
}

Or------------------------------------
    
#include <stdio.h>

int main()
{
    char str[] = "Maksudul Hasan Limon";
    char *ptr;
    ptr = str;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        *ptr++;
    }

    return 0;
}
    
