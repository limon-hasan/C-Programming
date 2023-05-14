#include<stdio.h>

void pay_amount(int dollars, int *ptr_twenties, int *ptr_tens, int *ptr_fives, int *ptr_ones);

int main()
{
    int amount,twenties,tens,fives,ones;
    printf("Enter a amount = ");
    scanf("%d",&amount);

    twenties = 20;
    tens = 10;
    fives = 5;
    ones = 1;

    pay_amount(amount,&twenties,&tens, &fives, &ones);
    return 0;

}

void pay_amount(int dollars, int *ptr_twenties, int *ptr_tens, int *ptr_fives, int *ptr_ones)
{
    int twenty = dollars/ *ptr_twenties; // twenty = 345/ 20
    dollars = dollars% *ptr_twenties;    //  dollars = 345 % 20
    int ten = dollars/ *ptr_tens;
    dollars = dollars% *ptr_tens;
    int five = dollars/ *ptr_fives;
    dollars = dollars% *ptr_fives;
    int one = dollars/ *ptr_ones;

    printf("20$ = %d\n",twenty);
    printf("10$ = %d\n",ten);
    printf("5$ = %d\n",five);
    printf("1$ = %d\n",one);
}
