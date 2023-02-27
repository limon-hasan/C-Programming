#include<stdio.h>
main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    switch(num)
    {
case 1:
        printf("The weekday is Saturday");
        break;
case 2:
        printf("The weekday is Sunday");
        break;
case 3:
        printf("The weekday is Monday");
        break;
case 4:
        printf("The weekday is Tuesday");
        break;
case 5:
        printf("The weekday is Wednesday");
        break;
case 6:
        printf("The weekday is Thursday");
        break;
    case 7:
        printf("The weekday is Friday");
        break;
    default:
        printf("This is not an option");
    }

    return 0;
}
