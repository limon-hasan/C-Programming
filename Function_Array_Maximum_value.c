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
   
Or------------------------------------------------
   
   
#include<stdio.h>

int num_array(int num[]);

int main()
{
    int a[]= {10,20,30,40,50,-5};

    int result = num_array(a);
    printf("The largest elements of the Array = %d",result);

    return 0;
}

int num_array(int num[])
{
    int max= num[0];
    for(int j=1; j<6; j++)
    {
        if(max<num[j])
            max=num[j];
    }
    return max;
}


Or------------------------------------------------------
   
   
#include<stdio.h>

void num_array(int num[]);

int main()
{
   int a[5]={10,20,30,40,50};

   num_array(a);

   return 0;
}

void num_array(int num[])
{
    int max= num[0];
    for(int j=1; j<5; j++)
    {
        if(max<num[j])
            max=num[j];
    }
      printf("The largest elements of the Array = %d",max);
}


Or----------------------------------------------------------
   
   
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
