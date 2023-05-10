#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float weight;
    char name[30];
};

int main()
{
    struct person *ptr;
    int n;
    printf("Enter the number of person = ");
    scanf("%d",&n);

    ptr = (struct person*) malloc(n* sizeof(struct person));

    for(int i=0; i<n; i++)
    {
        printf("Enter first name and age respectively :");
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("Displaying:\n");

    for(int i=0; i<n; i++)
    {
        printf("Name = %s\tAge = %d\n", (ptr+i)->name, (ptr+i)->age);

    }

}
