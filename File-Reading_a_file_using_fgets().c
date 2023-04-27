#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[40];

    fp = fopen("file.txt","r");

    if(fp==NULL)
        printf("File doesn't exist");
    else
    {
        printf("FIle is opened\n");

        while(!feof(fp))
        {
             fgets(ch,32,fp);    //fgets function e 3ta parameter thake. fgets(variable,size,filePointer) --> ei variable tate file data read kore rakhbe
             printf("%s",ch);    // ekhane size bole dewar lagbe, duita line e jodi same character na thake tahole ekta line e highest jeita shei size ta nibo ei khetere
        }                        // Amar file er line e 32 ta character chilo highest ejonno ami 32 diyechi

        fclose(fp);
    }

}
