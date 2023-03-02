// 1 theke 1000 porjonto jei number gula Armstrong sheigula print korte hobe
   
#include<stdio.h> 
int main()              
{
        int i,temp,initialNum,finalNum,sum=0,r;
        printf("Enter initial value = ");
        scanf("%d",&initialNum);
        printf("Enter final value = ");
        scanf("%d",&finalNum);

        for(i=initialNum; i<=finalNum; i++)
        {
            temp=i;
            while(temp!=0)
            {
                r = temp%10;
                sum = sum + r*r*r;
                temp = temp/10;
            }

            if(sum==i)
                printf("Armstrong Number = %d\n",i);
            sum = 0;         // Ekhane sum zero diye nite hobe karon printf e armstrong number ta showkorar por jokhon abar upore for loop e jabe oikhan theke pore loop er vitor diye cholar shomoy last jeita sum er value chilo oita diye calculation korbe mane zero diye korbe na, mane tokhon sum er value ta bere jabe onek ejonno prottek bar print korar por upore jawar age sum er value zero diye nibo jeno pore calculation er khetre prothome zero diye calculate kore
        }
}
