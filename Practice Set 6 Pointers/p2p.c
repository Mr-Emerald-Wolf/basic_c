#include <stdio.h>
int main()
{
    //declaring variables
    int i;
    int *j;  //Pointer data type
    int **k; //Pointer to Pointer

    i = 5;
    j = &i; //&i is address of i
    k = &j;

    printf("The value of i is: %d\n", **k);     // Value of i = 5
    

    return 0;
}