#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,arr1[10];
    int *ptr; //Pointer

    srand(time(0));   //Makes rand() give random values.
    for (size_t i = 0; i < 10; i++)
    {
        n = rand() % 100 + 1; //Random no. between 0-100
        arr1[i] = n;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("Value of %d element in array is: %d\n",i+1,arr1[i]);
    }
    
    ptr = arr1; //Pointer points to first element of array 
    printf("First element of array is: %d\n",*ptr);
    ptr += 2;
    printf("Third element of array is: %d\n",*ptr);

    

    return 0;
}