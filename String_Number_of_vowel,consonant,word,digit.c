#include<stdio.h>
int main()
{
    char str[30],ch;
    printf("Enter a string :");
    gets(str);

    int i,vowel,consonant,word,digit,other;
    i=vowel=consonant=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
            vowel++;

        else if(ch>='b'&&ch<='z' || ch>='B'&&ch<='Z')
            consonant++;

        else if(ch>='0'&&ch<='9')
            digit++;

        else if(ch==' ')
            word++;
        else
            other++;

        i++;

    }

    word++;


    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Number of digits = %d\n",digit);
    printf("Number of words = %d\n",word);
    printf("Number of others = %d\n",other);
}
