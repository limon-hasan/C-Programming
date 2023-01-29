(1)____________________________
    
#include<stdio.h>
#include<math.h> 

int main()
{
    double x = 10.5;
    double result = round(x);
    printf("round(%lf) is = %lf",x,result);

    return 0;
}

(2)___________________________________________
    
#include<stdio.h>
#include<math.h>

int main()
{
    double x = 10.9;
    double result = trunc(x);
    printf("trunc(%lf) is = %lf",x,result);

    return 0;
}

(3)__________________________________________________
    
#include<stdio.h>
#include<math.h>

int main()
{
    double x = 10.9;
    double result = trunc(x);
    printf("trunc(%lf) is = %lf",x,result);

    return 0;
}

(4)______________________________
    
#include<stdio.h>
#include<math.h>

int main()
{
    double x = 9.5;
    double result = floor(x);                 // floor function er kaj holo jei number ta input dibo sheitar nicher integer number ta show korbe. That means 2.4 dile 2 dekhabe
    printf("floor(%lf) is = %lf",x,result);

    return 0;
}



