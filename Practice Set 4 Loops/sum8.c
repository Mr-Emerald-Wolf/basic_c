#include <stdio.h>
int main()
{
    int sum, i; //Declaring variables
    i = 1;
    sum = 0;

    while (i < 11)
    {
        sum+=8*i++;
    }
    printf("%d",sum);

    return 0;
}