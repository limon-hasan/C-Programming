#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;

    person1.age = 24;
    person1.salary = 12450.67;

    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n",person1.salary);

    person2.age = 30;
    person2.salary = 29560.67;
    printf("Person 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);


    return 0;

}
