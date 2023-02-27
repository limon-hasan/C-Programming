If...Else Example Codes------------------------------------------------------

(1)---------------------------------------------------
    
#include<stdio.h>
int main()
{
    int x=2;
    if(x--)
        printf("1\n");
    if(x--)
        printf("2\n");
    if(x--)
        printf("3\n");
    if(x--)        // x=-1
        printf("None\n");

    printf("%d",x);  // x=-2
}                                            //  Decrement hole First e value check korbe, pore jeta kome othoba bare oita check korbe. 
                                              // Increment e first ei value barbe othoba kombe


Or-------------------------------------------
    
    
#include<stdio.h>
int main()
{
    int x=2;
    if(x--)
        printf("1\n");
    if(x--)
        printf("2\n");
    if(x--)
        printf("3\n");
    if(x++)          //x=-1
        printf("None\n");

    printf("%d",x); // x=0
}
    


(2)----------------------------------------                    // Sir er Conditional Statement Slide er page-41 er problem (b)

    
#include<stdio.h>
main()
{
    float salary,HRA,MA;
    printf("Enter the salary = ");
    scanf("%f",&salary);

    if(salary>=5000 && salary<=10000)
      {
        HRA= salary*0.1;
        MA= salary*0.05;
        printf("HRA = %f",HRA);
        printf("MA = %f",MA);
        }
    else if(salary>=10001 && salary<=15000)
        {
        HRA= salary*0.15;
        MA= salary*0.08;
        printf("HRA = %f",HRA);
        printf("MA = %f",MA);
        }
        else
            printf("Not in range\n");
    return 0;
}



(3)-----------------------------------------------------------
    
    
#include<stdio.h>
main()
{
    float sales,commission;
    printf("Enter the sales = ");
    scanf("%f",&sales);

    if(sales>=1 && sales<=10000)
    {
        commission= 0.04*sales;
        printf("commission = %f\n",commission);
    }
        else if(sales>=10001 && sales<=20000)
        {
            commission= 0.05*sales;
            printf("commission = %f\n",commission);
        }
        else if(sales>=20001 && sales<=30000)
        {
            commission= 0.06*sales;
            printf("commission = %f\n",commission);
        }
        else if(sales>30000)
        {
            commission= 0.07*sales;
            printf("commission = %f\n",commission);
        }
        else
            printf("Not in range\n");
        return 0;
    }
   
