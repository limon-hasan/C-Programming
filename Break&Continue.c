// break & continue statement

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<20; i++)
    {
        if(i%3==0)
            continue; // bypass hobe. Mane if er ei condition true hole loop er vitore pathiye dibe
                      // Ar if er vitore condition false hole continue kaj korbe na. tokhon niche printf er dike jabe
        printf("%d\n",i);
        if(i==10)
            break; // loop terminate. Mane if er ei condition true hole break hoye jabe mane loop er kaj shesh hoye jabe ar upore uthbe na.
                   // Ar if er vitor ei condition  true na hole abar upore pathaiye dibe

    }

    /*
    value= 1
    value= 2
     value= 4
     value= 5
     value= 7
     value= 8
    value= 10


    */
    getch();
}
