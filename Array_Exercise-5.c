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


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


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
        printf("Student %d : Total score = %d, ",i+1,total_score);
        printf("Average = %d\n",total_score/5);
        total_score=0;
    }
    
    for(i=0; i<5; i++)
    {
      int total_quiz=0;
     total_quiz = total_quiz+marks[0][i]+ marks[1][i]+marks[2][i]+marks[3][i]+marks[4][i];
    int average_quiz=total_quiz/5;
     printf("Average Quiz = %d\n",average_quiz);
    }
    
 return 0;
}
