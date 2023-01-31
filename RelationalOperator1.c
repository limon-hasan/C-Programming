/*
>
>=
<
<=
==
!=
*/

//control statement = conditional control statement, loop control statement
//conditional control statement = if-else,switch


(1)________________________________________________
    
    
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer = ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("num is even\n");
    }
    if(num%2!=0)
    {
        printf("num is odd\n");
    }

    return 0;

}


(2)____________________________________________________________________


#include<stdio.h>
int main()
{
    int time = 15;
    if(time==10)
    {

        printf("Good morning\n");
        printf("Maksudul Hasan Limon");
    }
    else
    {
        printf("Sorry it's not morning\n");
        printf("Maksudul Hasan Limon\n");

    }
return(0);
}
