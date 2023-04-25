#include<stdio.h>

enum days_of_week {Sun,Mon,Tue,Wed,Thu,Fri,Sat};

int main()
{
    enum days_of_week today1,today2;

    today1 = Sat;
    today2 = Mon;

    printf("Todays difference = %d",today1-today2);

}


or-------------------
    
#include<stdio.h>

enum days_of_week {Sun=1,Mon=4,Tue,Wed,Thu,Fri,Sat};

int main()
{
    enum days_of_week today1,today2;

    today1 = Sat;
    today2 = Sun;

    printf("Todays difference = %d",Sat-Thu);

}
