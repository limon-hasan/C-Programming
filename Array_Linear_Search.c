#include<stdio.h>
int main()
{
    while(1)
    {
       {
        int a[30],i,n,value;
        printf("Enter how many numbers = ");
        scanf("%d",&n);
        printf("Enter the value = ");
        scanf("%d",&value);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(value==a[i])
                break;
        }
        if(value==a[i])
            printf("Found\n");
        else
            printf("Not found\n");
       }
    }
}


---------------------------------------------------

// Using function of above of this code :

#include <stdio.h>
int linearSearch(int arr[], int size, int key, int *position) {
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            *position = i;
            return 1; // Found
        }
    }
    return 0; // Not found
}

int main() {
    while (1) {
        int a[30], n, value, pos;

        printf("Enter how many numbers = ");
        scanf("%d", &n);
        printf("Enter the value = ");
        scanf("%d", &value);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        if (linearSearch(a, n, value, &pos)) {
            printf("Position is = %d\n", pos);
        } else {
            printf("Not Found\n");
        }
    }

    return 0;
}
        

Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>
int main()
{
    while(1)
    {
        {
            int a[30],i,n,value;
            printf("Enter how many numbers = ");
            scanf("%d",&n);
            printf("Enter the value = ");
            scanf("%d",&value);

            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
            }

            for(i=0; i<n; i++)
            {
                if(value==a[i])
                    break;
            }
            if(value!=a[i])
                printf("Not Found\n");
            else
                printf("Found\n");
        }
    }
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>
int main()
{
    while(1)
    {
        int a[30],i,n,value,pos;

        printf("Enter how many numbers = ");
        scanf("%d",&n);
        printf("Enter the value = ");
        scanf("%d",&value);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(value==a[i])
            {
                pos = i+1;
                break;

            }
        }
        if(value==a[i])
            printf("Position is = %d\n",pos);
        else
            printf("Not Found\n");

    }
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>
int main()
{
    while(1)
    {
        int a[30],i,n,value,pos;

        printf("Enter how many numbers = ");
        scanf("%d",&n);
        printf("Enter the value = ");
        scanf("%d",&value);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(value==a[i])
            {
                pos = i+1;
                break;

            }
        }
        if(value!=a[i])
            printf("Not Found\n");

        else
             printf("Position is = %d\n",pos);

    }
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>
int main()
{
    while(1)
    {
        int a[30],i,n,value,pos=-1;

        printf("Enter how many numbers = ");
        scanf("%d",&n);
        printf("Enter the value = ");
        scanf("%d",&value);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(value==a[i])
            {
                pos = i+1;
                break;

            }
        }
        if(pos==-1)
            printf("Not Found\n");

        else
             printf("Position is = %d\n",pos);

    }
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include<stdio.h>
int main()
{
    while(1)
    {
        int a[]={10,20,30,40,50,60},i,value,pos=-1;

        printf("Enter the value = ");
        scanf("%d",&value);


        for(i=0; i<6; i++)
        {
            if(value==a[i])
            {
                pos = i+1;
                break;

            }
        }
        if(pos==-1)
            printf("Not Found\n");

        else
             printf("The value is found at %d position \n",pos);

    }
}
