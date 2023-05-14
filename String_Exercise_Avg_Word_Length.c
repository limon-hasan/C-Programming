#include<stdio.h>

double compute_average_word_length(char *s1);

int main()
{
    char str[40];
    printf("Enter a sentence = ");
    gets(str);

    double result = compute_average_word_length(str);

    printf("Average word length = %lf",result);
    return 0;
}

double compute_average_word_length(char *s1)
{
    int i=0, word=0, letter=0;

    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]==' ')
            word++;
    }
    word++;


    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]!=' ')
            letter++;
    }
    double avg_length = (double)letter/ word;
    return avg_length;
}
