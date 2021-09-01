#include <stdio.h>
int main()
{

    //declaring variables
    float c;
    float f;

    //taking input from user
    printf("Enter temparature in celsius: \n");
    scanf("%f", &c);

    //showing result to user
    f = c * (9.0 / 5) + 32; //int/int = int, 9/5 != 1.8 9/5 = 1 while 9.0/5 = 1.8
    printf("The temperature in fahrenheight is %f \n", f);
    return 0;
}