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
        fflush(stdin);
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
