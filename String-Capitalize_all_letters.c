#include<stdio.h>

void capitalize(char str[]);

int main()
{
    char s[] = "Maksudul Hasan";
    capitalize(s);
    return 0;
}

void capitalize(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(isalpha(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
    //printf("%s",str);
    puts(str);

}
