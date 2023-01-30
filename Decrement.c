(1)____________________________________________________________-    
    
#include<stdio.h>             //Pre Decrement
int main()
{
    int x=10;
    --x;
    printf("x = %d\n",x);
    return 0;
}

Or_________________________________
 
#include<stdio.h>                 //Pre Decrement
int main()
{
    int x=10;
    int y = --x; //y=9
    printf("x = %d\n",y);
    return 0;
}

(2)_____________________________________________________________________________

#include<stdio.h>                 //Post Decrement
int main()
{
    int x=10;
    x--;
    printf("x = %d\n",x);
    return 0;
}

Or___________________________________

#include<stdio.h>                  //Post Decrement
int main()
{
    int x=10;
    int y = x--;
    printf("x = %d\n",x);
    return 0;
}

Or_________________________________

#include<stdio.h>                    //Post Decrement
int main()
{
    int x=10;
    int y = x--; //y=10
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    return 0;
}
