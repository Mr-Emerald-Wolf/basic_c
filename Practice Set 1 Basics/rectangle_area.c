#include <stdio.h>

int main()
{
    //declaring variables
    int a;
    int b;

    //recieving input from user
    printf("Enter first side of rectangle: \n");
    scanf("%d", &a);
    printf("Enter second side of rectangle: \n");
    scanf("%d", &b);

    //calculating area of rectangle

    printf("Area of rectangle is: %d \n", a * b);

    return (0);
}