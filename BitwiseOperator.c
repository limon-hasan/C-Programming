/* Bitwise Operator

& = Bitwise AND
| = Bitwise OR
^ = Bitwise ExOR
>> =Right shift
<< = Left shift
~ = Bitwise NOT

*/

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


Or-------------------------------------------------------
    
    
#include<stdio.h>                           // Bitwise NOT
main()
{
    int x;
    printf("Enter a value = ");
    scanf("%d",&x);                  //  x = 3

    printf("%d",~x);                 // ~x = -4

    return 0;
}
