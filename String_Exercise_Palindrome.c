/* Write a program that reads a message, then checks whether it's a
palindrome (the letters in the message are the same from left to right as
from right to left). Ignore all characters that aren't letters. Use integer variables to keep
track of positions in the array. Includes the following function:
bool is_palindrome(const char *message);
The function returns true if the string pointed to by message is a
palindrome. */


#include<stdio.h>
#include<stdbool.h>       // Ei header file use na korleo hobe

bool is_palindrome(char *s1);

int main()
{
    char str[40];
    printf("Enter a message: ");
    fgets(str,40,stdin);

    if(is_palindrome(str))
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}

bool is_palindrome(char *s1)
{
    int left = 0;
    int right = strlen(s1) - 1;

    while(left<right)
    {
        while(!isalpha(s1[left]))
        {
            left++;
        }

        while(!isalpha(s1[right]))
        {
            right--;
        }
        if(tolower(s1[left])!= tolower(s1[right]))
            return false;

        left++;
        right--;
    }
    return true;
}


Or------------------------------------------------------
    
    
#include<stdio.h>
#include<stdbool.h>

bool is_palindrome(char *s1);

int main()
{
    char str[40];
    printf("Enter a message: ");
    fgets(str,40,stdin);

    char result = is_palindrome(str);
    if(result == true)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}

bool is_palindrome(char *s1)
{
    int left = 0;
    int right = strlen(s1) - 1;

    while(left<right)
    {
        while(!isalpha(s1[left]))
        {
            left++;
        }

        while(!isalpha(s1[right]))
        {
            right--;
        }
        if(tolower(s1[left])!= tolower(s1[right]))
            return false;

        left++;
        right--;
    }
    return true;
}   
