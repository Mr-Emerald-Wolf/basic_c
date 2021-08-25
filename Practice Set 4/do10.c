#include <stdio.h>
int main()
{
    int sum,i; //Declaring variables
    i = 1;
    sum = 0;
    do // Implementing do while loop for sum of first 10 natural numbers
    {
        sum += i++;
    } while (i<11);

    printf("The sum of first ten natural numbers is: %d",sum);
    
    return 0;
}