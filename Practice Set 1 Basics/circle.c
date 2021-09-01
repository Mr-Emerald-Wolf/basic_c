#include <stdio.h>
int main()
{
    //declaring variables 
    float r;

    //taking input from user 
    printf("Enter radius of circle:\n");
    scanf("%f", &r);

    //returning area of circle 
    printf("Area of circle is: %f \n", 3.14*(r*r));

    return 0;
}