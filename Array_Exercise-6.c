#include<stdio.h>
int main()
{
    int month,no_month,i,ini_balance=100;
    float low_rate,value[5];
    printf("Enter a lower range for profit = ");
    scanf("%f",&low_rate);
    printf("Enter number of months = ");
    scanf("%d",&no_month);
    printf("Enter initial balance = ");
    scanf("%d",&ini_balance);

    printf("\nMonths ");
    for(i=0; i<5; i++)
    {
        printf("%.2f%% ",low_rate+i);
        value[i]=ini_balance;
    }
    printf("\n");

    for(month=1; month<=no_month; month++)
    {
        printf("%d\t",month);
        for(i=0; i<5; i++)
        {
            value[i]= value[i]+value[i]*(low_rate+i)/100;
            printf("%.2f ",value[i]);
        }
        printf("\n");
    }

    return 0;
}
