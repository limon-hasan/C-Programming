If...Else Example Codes------------------------------------------------------


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
    
