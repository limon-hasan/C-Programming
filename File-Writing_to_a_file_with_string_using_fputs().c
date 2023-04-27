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

Or---------------------------------------
    
#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];

    file = fopen("file.txt","a");    // file mode "a" dile file e ager lekhar shathe notun kisu add hobe ar shudhu "w" dile ager lekha muchee giye notun ksu lekha hobe

    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File is opened\n");
        printf("Enter your University name : ");
        gets(name);

        //fputs(name,file);
        fprintf(file,"\n%s",name);
        printf("File is written successfully");
        fclose(file);
    }

}
    
