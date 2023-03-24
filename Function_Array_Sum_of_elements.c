#include<stdio.h>

int num_array(int num[], int size);

int main()
{
   int a[5];

   printf("Enter the elements of the array : ");
   for(int i=0; i<5; i++)
   {
       scanf("%d",&a[i]);
   }

   int result = num_array(a,5);

   printf("The sum of the elements of the Array = %d",result);
   
   return 0;
}

int num_array(int num[], int size)
{
    int sum=0;
    for(int j=0; j<size; j++)
    {
        sum = sum + num[j];
    }
    return sum;
}


Or-------------------------------------------------------------
   
   
#include<stdio.h>

int num_array(int num[], int size);

int main()
{
   int a[5];

   printf("Enter the elements of the array : ");
   for(int i=0; i<5; i++)
   {
       scanf("%d",&a[i]);
   }

   int result = num_array(a,5);

   return 0;
}

int num_array(int num[], int size)
{
    int sum=0;
    for(int j=0; j<size; j++)
    {
        sum = sum + num[j];
    }
    printf("The Sum of the elemenys of the Array is %d",sum);
}
   
