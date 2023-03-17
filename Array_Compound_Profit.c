#include<stdio.h>
int main()
{  
  while(1)
  {
      int year,i,no_year,ini_balance;
    float low_rate,value[5];
    printf("Enter a lower range for profit = ");
    scanf("%f",&low_rate);

    printf("Enter number of years = ");
    scanf("%d",&no_year);

    printf("Enter initial balance = ");
    scanf("%d",&ini_balance);

    printf("Years\t");
    for(i=0; i<5; i++)
    {
        printf("%5.2f%%\t",low_rate+i);
        value[i]=ini_balance;
    }
    printf("\n");

    for(year=1; year<=no_year; year++)
    {
        printf("%3d ",year);
        for(i=0; i<5; i++)
        {
            value[i] = value[i]+value[i]*(low_rate+i)/100;
            printf("%5.2f\t",value[i]);
        }
        printf("\n");
    }
  }

}
