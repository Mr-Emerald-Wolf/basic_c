#include <stdio.h>
float avg3(float a, float b, float c);
int main()
{
    float a,b,c,result; //Declaring variables and recieving input //remember float 

    printf("Enter first number: \n");
    scanf("%f",&a);
    printf("Enter second number: \n");
    scanf("%f",&b);
    printf("Enter third number: \n");
    scanf("%f",&c);

    result = avg3(a, b, c);

    printf("The average of the 3 numbers is %f \n",result);

    return 0;
}
float avg3(float a, float b, float c){
    return ( a + b + c )/3;
}