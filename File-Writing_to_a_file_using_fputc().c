#include<stdio.h>
int main()
{
    FILE *file;
    char ch[30] = " Hasan";
    int length = strlen(ch);

    file = fopen("open.text","w");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        for(int i=0; i<length; i++)
        {
            fputc(ch[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);

    }

}
