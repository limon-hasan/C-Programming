// Write a program that counts the number of vowels (a, e, i, o and u) in a sentence using a function

#include<stdio.h>

int compute_vowel_count(char *s1);

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);

    int result = compute_vowel_count(str);
    printf("The number of the vowel = %d",result);

    return 0;
}

int compute_vowel_count(char *s1)
{
     int i,vowel;
     i= vowel = 0;
     while(s1[i]!='\0')
     {
          if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
            s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
            vowel++;
            i++;
     }
     return vowel;
}
