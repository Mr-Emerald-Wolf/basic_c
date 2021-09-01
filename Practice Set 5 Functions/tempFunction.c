#include <stdio.h>
float tempC2F(float c);
int main()
{
     //declaring variables
     
    float c;

    //taking input from user
    printf("Enter temparature in celsius: \n");
    scanf("%f", &c);

    //showing result to user
    printf("The temperature in fahrenheight is %f \n", tempC2F(c));

    return 0;
}
float tempC2F(float c)
{
    return c * (9.0 / 5) + 32; //int/int = int, 9/5 != 1.8 9/5 = 1 while 9.0/5 = 1.8
}