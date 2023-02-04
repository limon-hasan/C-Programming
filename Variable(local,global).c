(1)____________________________________
    
#include<stdio.h>
int main()
{
    int a=10;   // a = local variable
    printf("Inside the main function a= %d\n",a);

}

(2)________________________________________
 
    
#include<stdio.h>
int a=10;      // a = global variable
int main()
{
    printf("Inside the main function a= %d\n",a);
    display();

}

void display()
{
    printf("Inside the display function a= %d\n",a);
}    
