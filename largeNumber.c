(1)___________________________________________________________________________

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter First number = ");
    scanf("%d",&num1);

    printf("Enter Second number = ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("Large is = %d\n",num1);
    }
    if(num1<num2)
    {
        printf("Large is = %d\n",num2);
    }
    if(num1==num2)
    {
        printf("Both are equal\n");
    }
    if(num1!=num2)
    {
        printf("Both are not equal\n");
    }

    return(0);
}


(2)_____________________________________________________________________________________
    
#include<stdio.h>
int main()

{
    int num1,num2;
    printf("Enter First number = ");
    scanf("%d",&num1);

    printf("Enter Second number = ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("Large is = %d\n",num1);
    }
    else if(num1<num2)                  // Ekhane else-if na diye jodi shudhu if ditam tahole (num1>num2) jodi true hoito tokhon abar nicher line e ashto. Jotobar if thakbe totobar e compiler check korbe. Ar jodi else-if ditam tahole prothom statement e (num1>num2) jodi true hoito tahole ar nicher line e ashto na, prothom statement ei program shesh hoye jaito. else ba else-if thakle prothom statement true hole niche ar ashbe na, ar jodi prothom ta true na hoy tahole nicher statement e ashbe. Ar if thakle prothom tao check korbe shathe second tao check korbe, jotobar thakbe totobar check korbe
    {
        printf("Large is = %d\n",num2); // else shobshomoy program er shesh e thake, program e ekta matro else thakte pare. Kintu proyonjon onujayi if, else-if jotogula iccha totogulause kora jabe
    }
    else
    {
        printf("Both are equal\n");
    }
    return 0;
}
    
