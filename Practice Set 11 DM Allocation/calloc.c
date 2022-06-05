#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *storage = calloc(6, sizeof(int)); //Can store 6 integers 
    // int *storage = malloc(6 * sizeof(int)); //Using malloc()
    for (size_t i = 0; i < 6; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&storage[i]);
    }
    for (size_t i = 0; i < 6; i++)
    {
        printf("Element %d stored is: %d\n",i+1,storage[i]);
    }
    storage = realloc(storage , 15*sizeof(int));
    free(storage);
    return 0;
}