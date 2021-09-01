#include <stdio.h>
int main()
{
    int year; //declaring var & recieving input from user
    printf("Enter year:");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("It's a leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    return 0;
}