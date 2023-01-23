#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);  //a=97

    printf("The Uppercase letter is = %c",lower-32);  //A=65

    getch();
}

