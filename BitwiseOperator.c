/* Bitwise Operator

& = Bitwise AND
| = Bitwise OR
^ = Bitwise ExOR
>> =Right shift
<< = Left shift
~ = Bitwise NOT

*/

(1)------------------------------------------------

    
#include<stdio.h>
int main()
{
    int a,b,c;
    a=44;
    b=12;

    c = a & b;
    printf("a&b = %d\n",c);

    c= a|b;
    printf("a|b = %d\n",c);

    c= a^b;
    printf("a^b = %d\n",c);

}


(2)-------------------------------------------------------
    
    
#include<stdio.h>                           // Bitwise NOT
main()
{
    int x;
    printf("Enter a value = ");
    scanf("%d",&x);                  //  x = 3

    printf("%d",~x);                 // ~x = -4

    return 0;
}


(3)-------------------------------------------
    
    
#include<stdio.h>                            >> = Bitwise Right shift
main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    printf("a>>1 = %d",a>>1);   //10>>1 = 5
                                //9>>1  = 4

    return 0;
}


                      
