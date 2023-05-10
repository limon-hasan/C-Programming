#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

struct student getInformation();

int main()
{
    struct student s;
    s = getInformation();
    printf("Name  = %s\n", s.name);
    printf("Age = %d\n", s.age);

    return 0;
}

struct student getInformation()
{
    struct student s1;
    printf("Enter name = ");
    fgets(s1.name, 50, stdin);
    printf("Enter age = ");
    scanf("%d", &s1.age);
    return s1;
}
