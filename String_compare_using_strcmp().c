#include<stdio.h>
int main()
{
    char str1[] = "Maksudul Hasan";
    char str2[] = "Maksudul";

    int result = strcmp(str1,str2);

    if(result==0)
     printf("Strings are same");
    else
     printf("Strings are not same");

}
