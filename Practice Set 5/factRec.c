#include <stdio.h>
int factorial(int a);
int main()
{
    int n; //Declaring variables and recieving input

    printf("Enter a number: \n");
    scanf("%d",&n);

    printf("Factorial of %d is: %d\n",n,factorial(n));
    return 0;
}
int factorial(int a)
{
    int f;
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        f = a * factorial(a - 1);
    }
    return f;
}