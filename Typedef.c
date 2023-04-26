#include<stdio.h>


int main()
{
    typedef char LETTER;

    LETTER ch1;
    ch1= 'A';

    printf("ch1 = %c\n",ch1);

    LETTER ch2;

    ch2 = 'B';
    printf("ch2 = %c\n",ch2);

}

Or-----------------------

#include<stdio.h>

struct book
{
    char name[20];
    int price;
};

int main()
{

    typedef struct book BOOK;
    BOOK b = {"Maksudul",78};

    printf("Name = %s\n",b.name);
    printf("Price = %d",b.price);

}
    
