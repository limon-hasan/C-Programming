#include<stdio.h>
#define size 26

int main()
{
    char str1[50];
    printf("Enter a string = ");
    gets(str1);
    int arr[size] = {0};
    int max=0;

    for(int i=0; str1[i]!='\0'; i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            arr[str1[i] -'a']++;
            if(arr[str1[i]-'a'] > max)
                max = arr[str1[i]-'a'];
        }
    }

    for(int k=0; k<26; k++)
    {
        if(arr[k]== max)
            printf("Max frequency element is: %c\n",k+'a');
    }
     printf("==> %d times", max);
    return 0;  
}
