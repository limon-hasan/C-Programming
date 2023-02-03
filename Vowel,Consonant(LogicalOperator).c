//Enter a letter to check vowel or consotant
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter = ");                     // && = Logical AND, || = Logical OR, ! = Logical NOT
    scanf("%c",&ch);

    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I' || ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
    {
        printf("vowel\n");
    }

    else
    {
        printf("consonant\n");
    }
    return 0;
}
