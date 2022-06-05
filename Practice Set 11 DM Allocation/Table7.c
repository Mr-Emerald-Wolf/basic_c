#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *table;  //Array storing table of 7
    int product;

    table = malloc(10 * sizeof(int)); //Allocating memory

    for (size_t i = 0; i < 10; i++) //Building table of 10
    {
        product = (i+1) * 7;

        table[i] = product;

        printf("7 x %d = %d\n",(i+1),table[i]);
    }

    printf("\n"); //Newline

    table = realloc(table, 15 * sizeof(int)); //Reallocating memory
    printf("Reallocated memory\n");
    
    for (size_t i = 0; i < 5; i++)
    {
        product = (i+1+10) * 7;
        table[i+10] = product;

        printf("7 x %d = %d\n",(i+1+10),table[i+10]);
    }
    free(table);
        
    return 0;
}