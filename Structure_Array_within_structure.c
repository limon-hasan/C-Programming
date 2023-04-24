#include<stdio.h>

struct Person
{
    char name[40];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    for(int i=0; i<4; i++)
    {
        printf("Enter information for Person : %d\n",i+1);
        printf("Enter Name : ");
        fflush(stdin);                          /* Ekhane ei function ta newa hoise karon name (char data) input new jacchilo na int data input newar por tai.
                                                   Ekhane shudhu abar scanf diye korle oi shomossha hobe na kintu tokhon ekta naam er er por ar space dewa jabe na. Ar evabe korle space dewa jabe    
                                                   Evabe---  scanf("%s",person[i].name);  */
                                                  
        fgets(person[i].name,20,stdin);
        printf("Enter Age = ");
        scanf("%d",&person[i].age);
        printf("Enter salary = ");
        scanf("%f",&person[i].salary);
    }

    for(int i=0; i<4; i++)
    {
        printf("\nInformation for Person : %d\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age = %d\n",person[i].age);
        printf("Salary = %f",person[i].salary);
    }

    return 0;
}
