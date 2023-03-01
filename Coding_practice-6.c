#include<stdio.h>
int main()
{
    
    int num,days,years,weeks,remaining_days;
    
    printf("Enter number of days = ");
    scanf("%d",num);   // num=400 
    years = num/365;  // year = 1
    remaining_days = num%365;  // remaining_days = 35
    weeks = (num%365)/7;  // weeks = 5
    days = (num%365)%7;   // days = 0
    
    printf("Year = %d",years);
    printf("Week = %d",weeks);
    printf("Day = %d",days);
}
