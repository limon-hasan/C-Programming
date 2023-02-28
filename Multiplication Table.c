/*
     Enter any number = 3
     num x i = num*i
      3 x 1 = 3
      3 x 2 = 6
      .........


      3 x 10 = 30

*/
#include<stdio.h>
int main()
{         
        int num,i;
        printf("Enter any number : ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n",num,i,num*i);
        }
    return 0;
}


Or,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,


#include<stdio.h>
int main()
{
    while(1)    // Ekhane while loop disi jeno code ta run korar por jeno shesh na hoye jay. Mane ekbar output dekhanor por jeno abar output dekhano jay different input er jonno
    {           // Ekhane while charao kora jabe
        int num,i;
        printf("Enter any number : ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n",num,i,num*i);
        }
    }
    return 0;
}
