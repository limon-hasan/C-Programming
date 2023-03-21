// Exercise-5

#include<stdio.h>
int main()
{
    int marks[5][5],i,total_score=0;

    for(i=0; i<5; i++)
    {
        printf("Student %d : ",i+1);
        scanf("%d %d %d %d %d",&marks[i][0],&marks[i][1],&marks[i][2],&marks[i][3],&marks[i][4]);
    }

    for(i=0; i<5; i++)
    {
        total_score = total_score+marks[i][0]+ marks[i][1]+marks[i][2]+marks[i][3]+marks[i][4];
        printf("Total score = %d, ",total_score);
        printf("Average = %d\t",total_score/5);
        total_score=0;
    }
}
