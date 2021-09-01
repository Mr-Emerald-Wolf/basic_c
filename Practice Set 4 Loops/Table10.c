#include <stdio.h>
int main()
{
    int n = 10,m; //Declaring variables 

    for (size_t i = 0; i < 10; i++) //basic for loop
    {
        m = n-i;
        printf("%d Multiplied with %d: %d\n",n,m,n*m);
    }
    
    return 0;
}