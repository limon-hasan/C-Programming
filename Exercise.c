#include<stdio.h>
#include<stdbool.h>

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

