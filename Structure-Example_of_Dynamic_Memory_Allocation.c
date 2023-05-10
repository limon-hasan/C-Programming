#include <stdio.h>
#include <stdlib.h>

struct course
{
    int marks;
    char subject[40];
};

int main()
{
    struct course *p;
    int n;
    printf("Enter no of records = ");
    scanf("%d",&n);

    p = (struct course*) malloc(n* sizeof(struct course));
    for(int i=0; i<n; i++)
    {
        printf("Enter subject and marks = ");
        scanf("%s %d", (p+i)->subject, &(p+i)->marks);
    }

    printf("\nDisplaying:\n");
    for(int i=0; i<n; i++)
    {
        printf("Subject = %s\tAge = %d",(p+i)->subject, (p+i)->marks);
    }
    free(p);
    return 0;
}
