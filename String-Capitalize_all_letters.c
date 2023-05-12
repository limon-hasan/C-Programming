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


Or------------------------------
    
    
#include<stdio.h>

void capitalize(char *ptr);

int main()
{
    char s[] = "Maksudul Hasan";
    capitalize(s);
    return 0;
}

void capitalize(char *ptr)
{
    char *t;
    t = ptr;
    while(*t!='\0')
    {
         if(isalpha(*t))
         *t = toupper(*t);
         t++;
    }
    puts(ptr);
}

    
