#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[50];
    int age,phoneNumber,num;

    fp = fopen("student.txt","a");

    if(fp==NULL)
        printf("File doesn't exist");
    else
    {
        printf("FIle is opened\n");
        printf("Enter number of stuents : ");
        scanf("%d",&num);

        for(int i=1; i<=num; i++)
        {
            printf("Enter students name : ");
            fflush(stdin);
            gets(ch);

            printf("Enter students age : ");
            scanf("%d",&age);

            printf("Enter students phone number : ");
            scanf("%d",&phoneNumber);

            fprintf(fp,"%s\t\t%d\t%d\n",ch,age,phoneNumber);
        }


        fclose(fp);
    }

}
