#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c",&ch);

    character(ch);

    return 0;
}

void character(char x)
{
    printf("The ASCII value of %c is %d",x,x);
}
