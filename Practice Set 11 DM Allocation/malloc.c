#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr; //Making array of 4 numbers
    ptr = (int *) malloc(4 * sizeof(int));
    for (size_t i = 0; i < 4; i++)
    {
        ptr[i] = i+9;
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i]);

    }
    printf("\n");

    ptr = realloc(ptr,1*sizeof(int)); //Reallocating memory
    printf("%u\n",ptr);

    for (size_t i = 0; i < 6; i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i]);

    }
    return 0;
}