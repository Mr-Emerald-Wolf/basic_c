#include <stdio.h>
int main()
{
    //declaring variables
    int i;
    int *j; //Pointer data type

    i = 5;
    j = &i; //&i is address of i    

    printf("The value of i is: %d\n", i);     // Value of i = 5
    printf("The address of i is: %u\n", &i);  // Address of i
    printf("The value of j is: %u\n", j);     // Address of i is stored on j
    printf("The value of i is: %d\n", *(&i)); // *(address) gives value stored on address
    printf("The value of i is: %d\n", *j);    // Same as above

    return 0;
}