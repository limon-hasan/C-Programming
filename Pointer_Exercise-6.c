#include<stdbool.h>

bool search(const int a[], int n, int key)
{
    int *p = a;  // initialize a pointer to the beginning of the array
    int *q = a+n;   // initialize a pointer to the end of the array

    while(p<q)   // loop until the pointer reaches the end of the array
    {
        if(key==*p)   // if the current element matches the key, return true
            return true;
        p++;   // move the pointer to the next element
    }
    return false;   // key not found, return false
}
