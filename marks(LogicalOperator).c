#include<stdio.h>
main()
{
    int mark;
    printf("Enter Mark = ");
    scanf("%d",&mark);

    if(mark>100 || mark<0)
    {
        printf("Invalid");
    }
    else if(mark>=80 && mark<=100)
    {
        printf("A+");
    }
    else if(mark>=70 && mark<80)
    {
        printf("A");
    }
     else if(mark>=60 && mark<70)
    {
        printf("A-");
    }
    else if(mark>=50 && mark<60)
    {
        printf("B");
    }
    else if(mark>=40 && mark<50)
    {
        printf("C");
    }
    else if(mark>=34 && mark<40)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }


    return(0);
}
