#include <stdio.h>
int main()
{
    float pol, hist, geo, total; //declaring var & recieving input from user
    printf("Enter marks in Political Science:\n");
    scanf("%f", &pol);
    printf("Enter marks in History:\n");
    scanf("%f", &hist);
    printf("Enter marks in Geography:\n");
    scanf("%f", &geo);

    total = (pol + hist + geo) / 3;
    printf("%f\n", total);

    if (total < 40)
    {
        printf("Fail: Total is less than 40\n");
    }
    else if (pol < 33)
    {
        printf("Fail: Pol Science is less than 33\n");
    }
    else if (hist < 33)
    {
        printf("Fail: History is less than 33\n");
    }
    else if (geo < 33)
    {
        printf("Fail: Geography is less than 33\n");
    }
    else
    {
        printf("Pass\n");
    }

    return 0;
}