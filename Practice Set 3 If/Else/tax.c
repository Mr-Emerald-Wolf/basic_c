#include <stdio.h>
int main()
{
    float sal; //declaring var & recieving input from user

    printf("Enter salary in lakhs:\n");
    scanf("%f", &sal);

    if (sal > 10)
    {
        printf("The tax is:%f\n",sal*0.3*100000);
    }
    else if (sal <= 10 && sal > 5)
    {
        printf("The tax is:%f\n",sal*0.2*100000);
    }
    else if (sal <= 5 && sal > 2.5)
    {
        printf("The tax is:%f\n",sal*0.05*100000);
    }
    else if (sal<=2.5)
    {
        printf("No tax\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    

    return 0;
}