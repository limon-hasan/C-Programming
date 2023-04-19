#include<stdio.h>
int main()
{
    char s1[]="Maksudul Hasan Limon";
    int i=0,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d",len);

}
