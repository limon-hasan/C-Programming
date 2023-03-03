#include<stdio.h>
int main()
{
        int n,row,col;
        printf("Enter N = ");
        scanf("%d",&n);  // n = 4

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=row; col++)   // Ekhaner pattern(1,12,123) er col er protia number ke 2 diyevag korle je remainder pabo shetai ei notun (1,10,101) pattern er prottek ta number
            {
                printf("%d ",col%2);     // Ekhane col er number gulai print hocche tai output e print korar shomoy col er value ke 2 diye vag korle je remainder pabo eta dekhaye dibo that means (col%2) 
            }
            printf("\n");
        }
        return 0;
    }

