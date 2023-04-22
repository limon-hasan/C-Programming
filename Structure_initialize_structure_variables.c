#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {21,34500.67};  // eita direct assignment korsi
    struct Person person2,person3;

    //element wise assignment
    person2.age = 27;
    person2.salary = 20900.56;

    //structure variable assignment
    person3 = person2;

    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n",person1.salary);

    printf("Person 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);

    printf("Person 3 :\n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %f\n",person3.salary);

    return 0;

}
