(1)_______________

#include<stdio.h>
#include<math.h>    // <math.h> eita use na korleo hobe. compiler bujhe nibe je ei library function gula ei HEADER file er vitorei ache 
int main()
{
    double x =10.5;
    double result = log(x);
    printf("log(%lf) is = %lf",x,result);

    return 0;                                                 // Egula double type value return kore tai double type data nisi
}


(2)________________
  
#include<stdio.h>
int main()
{
    double x =10.5;
    double result = log10(x);
    printf("log10(%lf) is = %lf",x,result);

    return 0;
}


(3)_________________
  
#include<stdio.h>
#include<math.h>     // <math.h> eita use na korleo hobe. compiler bujhe nibe je ei library function gula ei HEADER file er vitorei ache

int main()
{
    double x = 3.9;
    double result = sin(x);
    printf("sin(%lf) is = %lf",x,result);

    return 0;
}


