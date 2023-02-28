// goto statement

#include<stdio.h>
int main()
{
    int y=5;
    anis:
        printf("%d\n",y);
        y++;


        if(y<10)
            goto anis;

    return 0;
}


/*
Structure of goto statement 

goto label;
......


label:
    staments;
 */
