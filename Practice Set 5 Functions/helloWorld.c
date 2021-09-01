#include <stdio.h>
void hello(); //Function Prototype
int main()
{
    printf("Calling Function\n");
    hello(); //Function call

    return 0;
}
void hello() //Function Definition
{
    printf("Hello World\n");
}