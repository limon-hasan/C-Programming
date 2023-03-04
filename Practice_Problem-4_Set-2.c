#include <stdio.h>
int main()
{
    int num,i,sum=0,odd;
    printf("Enter number of terms = ");
    scanf("%d",&num);  //num=7


   for(i=1; i<=num; i=i+1)
   {      
           odd = 2*i-1;
           sum=sum+odd;
        printf("%d ",odd);
   }
    printf("\nThe sum of odd numbers = %d",sum);
}



Or-------------------          // For even numbers
  
  
  #include <stdio.h>
int main()
{
    int num,i,sum=0,even;
    printf("Enter number of terms = ");
    scanf("%d",&num);  //num=7


   for(i=1; i<=num; i=i+1)
   {
           even = 2*i;
           sum=sum+even;
        printf("%d ",even);

   }
    printf("\nThe sum of even numbers = %d",sum);
}
