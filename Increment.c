(1)___________________________________
    
#include<stdio.h>       //Post Increment
int main()
{
    int x=10;
    int y = x++; //y=10
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    return 0;
}

Or________________

#include<stdio.h>               //Post Increment
int main()
{
    int x=10;
    x++;
    printf("x = %d\n",x);
    return 0;
}

(2)___________________________________________
    
#include<stdio.h>                  //Pre Increment                                                            
int main()
{
    int x=10;
    int y = ++x; //y=11
    printf("x = %d\n",y);
    return 0;
}

Or__________________

#include<stdio.h>                 //Pre Increment
int main()
{
    int x=10;
    int y = ++x; //y=11
    printf("x = %d\n",y);
    return 0;
}

Or________________

#include<stdio.h>            //Pre Increment
int main()
{
    int x=10;
    ++x;
    printf("x = %d\n",x);
    return 0;
}
