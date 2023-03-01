#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;         // Shudhu sum of digits er khetre temp variable na niye num variable diye krorleo hobe. 
                                  // karon ekhane pore kothao num variable er theke kono input newa lagtese na, jeta Palindrome othoba Armstron number checkkorar khetre last e If conditon e num variable er shathe onno variable check korte hoy ejonno
    printf("Enter a number = ");  // num=423
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp= temp/10;
    }
    printf("Sum of digits = %d\n",sum); // sum=9

    return 0;
}
