#include<stdio.h>

struct Person
{
    char name[40];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("\nName : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("salary : %f\n",p.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Maksudul Hasan Limon");   // structure er moddhe string eivabe mane (person1.name = {"Maksudul"}) declare kora jay na tai strcpy function use kore kora hoyeche
    person1.age = 21;
    person1.salary = 12390.34;
    display(person1);

    strcpy(person2.name,"Anisul Islam");
    person2.age = 40;
    person2.salary = 30450.45;
    display(person2);

    return 0;
}
