#include<stdio.h>

void uprcaseLower(char *s);

int main()
{
    char str[100];
    printf("Enter a string = ");
    fgets(str,100,stdin);

    uprcaseLower(str);
    printf("Uppercase string = %s",str);
    return 0;
}

void uprcaseLower(char *s)
{
     int i=0;
     while(s[i]!='\0')
     {
         if(s[i]>='A' && s[i]<='Z')
          s[i] = s[i]+32;
         i++;
     }
}
