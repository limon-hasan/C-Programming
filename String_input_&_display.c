#include<stdio.h>
int main()
{
   char s1[30];
   printf("Enter your full name : ");
   gets(s1);

   printf("Full name = %s\n",s1);

}


Or----------------------------------
  
#include<stdio.h>
int main()
{
   char s1[30];
   printf("Enter your full name : ");
   fgets(s1,30,stdin);

   printf("Full name = %s\n",s1);

}
