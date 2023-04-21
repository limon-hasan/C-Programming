#include<stdio.h>
int main()
{
    char str1[30] = "Maksudul Hasan";
    char str2[30] = "Limon";
    char temp[30];

    printf("Before swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swapping\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

}
