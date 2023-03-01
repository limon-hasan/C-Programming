/* 

Check Palindrome number 
Palindrome number holo emn ek number jetake reverse korar por hubohu ager number ta pawa jay. 
Example: 121 or 454 ke reverse korele 121 ba 454 e pawa jay. 
*/

#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter a number = ");
    scanf("%d",&num);  //num = 121;
    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("The reversed number = %d\n",sum);  // sum = 121

    if(num==sum)
        printf("Palindrome number");
    else
        printf("Not Palindrome number");

    return 0;
}
