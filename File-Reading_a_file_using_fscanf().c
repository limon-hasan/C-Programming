#include<stdio.h>
int main()
{
    FILE *fp;
    char ch1[50];
    char ch2[20];


    fp = fopen("file.txt","r");

    if(fp==NULL)
        printf("File doesn't exist");
    else
    {
        printf("FIle is opened\n");

        fscanf(fp,"%s %s",&ch1,&ch2);    //fscanf() function e 3 ta parameter thake. fscanf(filePointer,format specifier,variable)
        printf("%s %s",ch1,ch2);         /* Output e jodi Limon Hasan thake tahole eita ekta string hishebe count korle hobe na karo %s tokhon Limon er pore Hasan print korte pare na ejonno "Limon Hasan" duita string dhorte hobe ebong Limon er pore jehetu space ache tai ekta %s diye pore space diye arekta %s dite hobe
                                            ejonno "Limon Hasan" duita string dhorte hobe ebong Limon er pore jehetu space ache tai ekta %s diye pore space diye arekta %s dite hobe */
        fclose(fp);
    }

}
