#include<stdio.h>
int main()
{
        float roll,sub_1,sub_2,sub_3,sub_4,sub_5,total,average;
        char name[5];


        printf("Enter roll number = ");
        scanf("%f",&roll);
        printf("Enter name = ");
        scanf("%s",&name);
        printf("Enter subject one = ");
        scanf("%f",&sub_1);
        printf("Enter subject two = ");
        scanf("%f",&sub_2);
        printf("Enter subject three = ");
        scanf("%f",&sub_3);
        printf("Enter subject four = ");
        scanf("%f",&sub_4);
        printf("Enter subject five = ");
        scanf("%f",&sub_5);

        total = sub_1+sub_2+sub_3+sub_4+sub_5;
        average = total/5;
        printf("%s has gotten %f %f %f %f %f\n",name,sub_1,sub_2,sub_3,sub_4,sub_5);
        printf("Total mark is = %f\n",total);
        printf("Average mark is = %f",average);
}
