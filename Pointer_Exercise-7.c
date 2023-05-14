
int main()
{
    int n;
    printf("Enter the number of the elements of the array = ");
    scanf("%d",&n);
    int a[n], largest, second_largest;
    printf("Enter the largest element = ");
    scanf("%d",&largest);
    printf("Enter the second largest element = ");
    scanf("%d",&second_largest);

    find_two_largest(a,n,largest,second_largest);
    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    if(n<2)
        // Not enough elements in the array
        return;

    if(*a>*(a+1))
    {
        // If the first element is larger than the second element
        *largest = *a;               // Set the largest element to the first element
        *second_largest = *(a+1);    // Set the second largest element to the first element
    }

    else
    {
        *largest = *(a+1);       // Set the largest element to the first element
        *second_largest = *a;    // Set the second largest element to the first element
    }

    int *p = a+2;   // Pointer to the third element of the array
    int *q = a+n;   // Pointer to the end of the array

    while(p<q)   // Iterate through the remaining elements of the array from third element to end of the array

    {
        if(*p>*largest)
        {
            // If the current element is larger than the largest element
            *largest = *p;                // Move the current largest element to the second largest
            *second_largest = *largest;    // Set the current largest element to the current element
        }

        else if(*p>*second_largest)
        {
            // If the current element is larger than the second largest element but not the largest
            *second_largest = *p;
        }

        p++;   // Move the pointer to the next element
    }
}
