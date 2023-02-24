//Enter a letter to check vowel or consotant
                 
#include<stdio.h>
int main()
{
                                              // && = Logical AND, || = Logical OR, ! = Logical not
    char ch;
    printf("Enter a character  = ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='e' || ch=='u')
        printf("This is vowel");
    else if(ch=='A' || ch=='I' || ch=='O' || ch=='E' || ch=='U')
        printf("This is vowel");
    else if(ch>='B' && ch<='Z')
        printf("This is consonant");
    else if(ch>='b' && ch<='z')
        printf("This is consonant");
    else
        printf("This is not valid");
    getch();
}
