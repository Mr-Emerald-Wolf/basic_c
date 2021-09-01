#include <stdio.h>
int main()
{
    //declaring variables
    int h;
    int r;

    //taking input from user
    printf("Enter height of cylinder: \n");
    scanf("%d", &h);
    printf("Enter radius of cylinder: \n");
    scanf("%d", &r);

    //calculating volume and area of cylinder 
    printf("The volume and total surface area of cylinder is %f m^3 and %f m^2.", 3.14*r*r*h, 2*3.14*r*h + 2*3.14*r*r );
    return 0;
}