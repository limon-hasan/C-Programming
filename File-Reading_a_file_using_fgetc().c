#include<stdio.h>
int main()                                   
{
    FILE *fp;
    char ch;

    fp = fopen("file.txt","r");

    if(fp==NULL)
        printf("File doesn't exist");
    else
    {
        printf("FIle is opened\n");
        
        while(!feof(fp))  // File shuru theke shesh porjonto read korbo amra ejonno file end of function use korechi while loop er vitore 
        {
            ch = fgetc(fp);  //fgetc() ei function er maddhome amra ekta ekta kore character nite parbo mane fgetc function ta ekta ekta kore character amader dite thakbe ejonno ekta char typer variable declare kore nibo character gula newar jonno
            printf("%c",ch);    /* output -->   Name = Limon, Age = 20
                                                Name = Maksudul Hasan, Age = 30    */
         }
         
        fclose(fp);
    }

}
