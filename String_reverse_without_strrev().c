#include<stdio.h>
int main()
{
    char str1[30] = "Maksudul Hasan";
    char str2[30];

    int i=0,len=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(int j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';
    

    printf("str1 = %s\n",str1);
    printf("str2 = %s",str2);
}


Or--------------------------------------------------------------------------


// Reverse the sentence like a sentence is "i am a good boy" so the reverse sentence of this sentence is "boy good a am I"


#include <bits/stdc++.h>
using namespace std;

void reverseSentence(char *sentence)
{
    char *token;
    char *word[100];
    int count=0;

   // std:: istringstream
   // std:: vector<std:: string>
    token = strtok(sentence, " ");   // strtok() function is used to tokenize the string. It takes two arguments: the first one is the string to be tokenized (sentence), and the second one is the delimiter (" ").
    while(token!= NULL)
    {
        word[count++] = token;
        token = strtok(NULL, " ");   // token = strtok(NULL, " "); is used to continue the tokenization process and find the next word in the sentence.
    }

    cout << "Reverse Sentence: ";
    for(int i=count-1; i>=0; i--)
    {
        cout << word[i] << "";
    }
    cout << endl;
}

int main()
{
    char sentence[] = "I am so lucky";
    reverseSentence(sentence);

    return 0;
}
   
