#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);  //a=97

    printf("The Uppercase letter is = %c",lower-32);  //A=65

    getch();
}

_________________________________________________________________________________________________________________________________________________________________________-___

#include<stdio.h>
int main()
{
    char h;
    printf("Enter any Uppercase letter : ");
    scanf("%c",&h);   //D=68

    printf("The lowercase letter is = %c",h+32);   //d=100
    getch();
}
