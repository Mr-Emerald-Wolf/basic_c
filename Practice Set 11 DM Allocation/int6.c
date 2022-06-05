#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *storage = (int *) malloc(6 * sizeof(int)); //Can store 6 integers 
    for (size_t i = 0; i < 6; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&storage[i]);
    }
    for (size_t i = 0; i < 6; i++)
    {
        printf("Element %d stored is: %d\n",i+1,storage[i]);
    }
    
    return 0;
}