#include<stdio.h>

int num_array(int num[], int size);

int main()
{
   int a[100];
   int n;
   printf("Enter the range = ");
   scanf("%d",&n);

   printf("Enter the elements of the array : ");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }

   int result = num_array(a,n);

   printf("The largest elements of the Array = %d",result);

   return 0;
}

int num_array(int num[],int size)
{
    int max= num[0];
    for(int j=1; j<size; j++)
    {
        if(max<num[j])
            max=num[j];
    }
    return max;
}
