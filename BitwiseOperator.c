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
