(For Loop)-------------------------------------


#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i++)  // For Loop e 3 ta part thake. for(initialization; condition; counter)
                          //{ statement eker odhik thakle second bracket dibo}
      
    {                  
     printf("C Programming\n");
     printf("%d\n",i);

    }


}


Or,


 #include<stdio.h>
int main()
{
    int x;
    for(x=-2; x>=-100; x--)
        printf("%d\n",x);

}



(while loop)-----------------------------------------
    

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)    // while loop e shudhu condition thake

    {
        printf("%d\n",i);
        i++;              //increment
    }


}



(do while loop)----------------------------------
    
    
#include<stdio.h>
int main()
{
    int i=1;
    do                  // Prothom e do er kaj kore pore while er kaj kore
    {
        printf("%d\n",i);
        i++;              //increment
    }
    while(i<=10); // condition

}

