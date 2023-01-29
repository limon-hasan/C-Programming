#include<stdio.h>
int main()
{
    int x = 10;
    double result = sqrt(x);      //Square Root সবসময় Double type value return করে

    printf("%.4lf",result);

}                                                              
                                    

OR----------
    

#include<stdio.h>
int main()
{
    int x ;
    printf("Enter any value ");
    scanf("%d",&x);

    double result = sqrt(x);
    printf("%.4lf",result);

}
    
