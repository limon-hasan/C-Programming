#include <stdio.h>

void displayString(char s1[]);

int main()
{
    char str[30];
    printf("Enter a string = ");
    //scanf("%s",str);
    fgets(str,30,stdin);
    displayString(str);
    return 0;

}

void displayString(char s1[])
{
    printf("String Output:\n");
    //printf("str = %s",s1);
    puts(s1);
}
