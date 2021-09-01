#include <stdio.h>
int main()
{
    //declaring variables
    float p;
    float r;
    float t;
    float s;

    //taking input from user
    printf("Enter principle amount: \n");
    scanf("%f", &p);
    printf("Enter rate of interest: \n");
    scanf("%f", &r);
    printf("Enter time period: \n");
    scanf("%f", &t);
    
    //calculating simple interest
    s = p*r*t/100;
    printf("The simple interest is: %f",s);
    printf("The total amount is: %f",s+p);

    return 0;
}