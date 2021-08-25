#include <stdio.h>
int main()
{
    int fact,n; //Declaring variables and recieving input
    fact = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (size_t i = 1; i < n+1; i++) //Factorial for loop
    {
        fact *= i; 
    }
    printf("Factorial is: %d",fact);

    return 0;
}