#include<stdio.h>

#define MUL(a,b) a*b

int main()
{
    printf("%d",MUL(5,6));

}

Or-----------------------------
    
#include<stdio.h>

#define MUL(a,b) a*b            // macro hishebe function o use kora jay

int main()
{
    printf("%d",MUL(5,6));    //Output--> -5

}


Or----------------------------------------
    
#include<stdio.h>

#define MAX(a,b) if(a>b) \
                   printf("%d is maximum",a); \        // nicher line e likhte hole \ dite hobe shudhu
                   else \
                    printf("%d is maximum",b);

int main()
{
    MAX(3,4);

}

    
