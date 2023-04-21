#include<stdio.h>
int main()
{
    char str[30],ch;
    printf("Enter a string : ");
    gets(str);

    int i,capital,small,digit;
    i=capital=small=digit=0;

    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;
        else if(ch>=97 && ch<=122)
            small++;
        else if(ch>=48 && ch<=57)
            digit++;

        i++;

    }

    printf("Number of capital letters = %d\n",capital);
    printf("Number of small letters = %d\n",small);
    printf("Number of digits = %d\n",digit);

}
