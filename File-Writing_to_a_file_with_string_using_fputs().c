#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];

    file = fopen("file.txt","w");

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File is opened\n");
        printf("Enter your University name : ");
        gets(name);

        fputs(name,file);
        printf("File is written successfully");
        fclose(file);
    }

}
