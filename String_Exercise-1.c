#include<stdio.h>
void stringCopy(char *s1, char *s2);

int main()
{
    char str1[] = "Maksudul Hasan";
    char str2[30];

    stringCopy(str1,str2);

    printf("Copied string = %s",str2);
    return 0;
}

void stringCopy(char *s1, char *s2)
{
     int i=0;
     while(s1[i]!='\0')
     {
          s2[i] = s1[i];
          i++;
     }
     s2[i] = '\0';
}
