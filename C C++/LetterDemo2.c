#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("Uppercase letter = %c",upper);

    return 0;
}

__________________________________________________________________________________________________________________________________________________________________________________________________
    
#include<stdio.h>
int main()
{
    char a,b;
    printf("Enter an uppercase letter : ");
    scanf("%c",&a);

    b = tolower(a);
    printf("The lowercase letter = %c",b);
    
    return 0;
}    
