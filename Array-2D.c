#include<stdio.h>
int main()
{
   int A[3][4]={  {5,6,7,8},{9,10,12,13},{14,15,16,17}  };
   int i=3,j=4;

   for(i=0; i<3; i++)
   {
       for(j=0; j<4; j++)
       {
           printf("%d ",A[i][j]);
       }
       printf("\n");
   }

    return 0;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>
int main()
{
   int A[3][4]={  {5,6,7},{9,10,12},{14,15,16}  };
   int i=3,j=4;

   for(i=0; i<3; i++)
   {
       for(j=0; j<4; j++)
       {
           printf("%d ",A[i][j]);
       }
       printf("\n");
   }

    return 0;
}
