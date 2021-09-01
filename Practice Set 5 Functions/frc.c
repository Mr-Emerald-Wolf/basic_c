#include <stdio.h>
float frc(float m);
int main()
{
    //declaring variables
    float m;

    //taking input from user
    printf("Enter mass of body: \n");
    scanf("%f", &m);

    //showing result to user
    printf("The force of gravity experienced by the body is %f N \n", frc(m));

    return 0;
}
float frc(float m)
{
    return m * 9.8; //acc. due to gravity is 9.8 m/s^2
}