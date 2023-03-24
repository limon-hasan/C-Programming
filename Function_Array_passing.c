#include<stdio.h>

void array(int num[])       // void er jaygay int dileo hobe
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[]={10,20,30,40,50};

    array(a);

}


Or--------------------------------------------------------------
    
    
#include<stdio.h>

void array(int num[])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[5]={10,20,30,40,50};

    array(a);

}


Or------------------------------------------------
    

#include<stdio.h>

void array(int num[5])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[]={10,20,30,40,50};

    array(a);

}


Or-----------------------------------------------
    
    
#include<stdio.h>

void array(int num[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[5]={10,20,30,40,50};

    array(a,5);

}

    
Or----------------------------------------------------
    
    
#include<stdio.h>

void array(int num[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",num[i]);
    }
}

int main()
{
    int a[]={10,20,30,40,50};

    array(a,5);

}
    

Or----------------------------------------------------------
    
    
#include<stdio.h>

void array(int num[], int size)
{
    printf("The elements are : ");
    for(int j=0; j<size; j++)
    {
        printf("%d ",num[j]);
    }
}

int main()
{
   int a[5];
    
   printf("Enter the elements of the array : ");
   for(int i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }

    array(a,5);
    
    return 0;
}    
    

Or----------------------------------------------------
    
    
#include<stdio.h>

void array(int num[], int size)
{
    printf("The elements are : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",num[i]);
    }
}

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

    array(a,n);
    
    return 0;
}
    
