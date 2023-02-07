#include<stdio.h>
int main()
{
    int A;
    float B,XY;
    printf("Temperature Conversion\n");
    printf("1. Celsius to Farenheit Conversion\n");
    printf("2. Farenheit to Celsius Conversion\n");
    printf("Enter any number = ");
    scanf("%d",&A);

    switch(A)
    {
        case 1:
        printf("Enter your Celsius temperature = ");
        scanf("%f",&B);
        XY = (1.8*B)+32;
        printf("The Farenheit temperature = %f", XY);
        break;

        case 2:
         printf("Enter your Farenheit temperature = ");
        scanf("%f",&B);
        XY = (B-32)/1.8;         // Ekhane case-1 er moto same B,XY variable na niye onno duita variable nileo hoto
        printf("The Celsius temperature = %f", XY);
        break;
        default:
            printf("Not a valid option");
    }

    getch();
}
