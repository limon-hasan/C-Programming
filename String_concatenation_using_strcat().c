#include<stdio.h>
int main()
{
   char str1[] = "My name is Maksudul ";
   char str2[] = "Hasan Limon";

   strcat(str1,str2);

   printf("str1 = %s\n",str1);
   printf("str2 = %s",str2);

}


Or-------------------------------------
  
#include<stdio.h>
int main()
{
   char str1[] = "My name is Maksudul ";

   strcat(str1,"Hasan Limon");

   printf("str1 = %s\n",str1);
}
  
  
