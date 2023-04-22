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

    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("Person1 equal to person2");
    else
        printf("Person1 not equal to person2");

    return 0;

}
