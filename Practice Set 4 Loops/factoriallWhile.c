#include <stdio.h>
int main()
{
    int fact,n,i; //Declaring variables and recieving input
    fact = 1;
    i = 1;

    printf("Enter a number: \n");
    scanf("%d",&n);

    while (i<n+1)
    {
       fact *= i++;

    }
    
    printf("Factorial is: %d\n",fact);

    return 0;
}