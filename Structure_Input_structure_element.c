#include<stdio.h>

//global structure
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;   // local variable

    printf("Enter information for person 1 :\n");
    printf("Enter Age :");
    scanf("%d",&person1.age);
    printf("Enter salary :");
    scanf("%f",&person1.salary);


    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n",person1.salary);

    printf("\nEnter information for person 2 :\n");
    printf("Enter Age :");
    scanf("%d",&person2.age);
    printf("Enter salary :");
    scanf("%f",&person2.salary);

    printf("Person 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);

    return 0;

}
