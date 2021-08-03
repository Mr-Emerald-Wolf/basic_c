#include <stdio.h>
int main()
{
    int num; //Declaring var and recieving input from user
    printf("Enter number between 10-50: \n");
    scanf("%d", &num);

    if (num >= 10 && num <= 20)
    {
        printf("Number is between 10-20");
    }
    else if (num > 20&& num<=30)
    {
        printf("Number is between 21-30");
    }
    else if (num > 20&& num<=40)
    {
        printf("Number is between 31-40");
    }
    else if (num > 40&& num<=50)
    {
        printf("Number is between 41-50");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}