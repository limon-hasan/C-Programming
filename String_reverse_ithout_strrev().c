#include<stdio.h>
int main()
{
    char str1[30] = "Maksudul Hasan";
    char str2[30];

    int i=0,len=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(int j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j] = str1[i];
    }


    printf("str1 = %s\n",str1);
    printf("str2 = %s",str2);
}
