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
    int salary;
    printf("Enter the salary = ");
    scanf("%d",&salary);

    if(salary>=5000 && salary<=10000)
    {
        printf("HR = 10%\n");
        printf("MA = 5%\n");
    }
    else if(salary>=10001 && salary<=15000)
    {
        printf("HR = 15%\n");
        printf("MA = 8%\n");
    }
    else
        printf("Not in range\n");
    return 0;
}
