#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;

    file = fopen("file.txt","w");

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File is opened\n");
        printf("Enter your name : ");
        gets(name);

        printf("Enter age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d",name,age);     //fprintf(filepointer,"format specifier",variable) --> format specifier vitore ja likhbo tai file e lekha uthbe
        printf("File is written successfully");
        fclose(file);
    }

}
