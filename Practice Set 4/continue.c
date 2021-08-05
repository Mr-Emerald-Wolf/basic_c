#include <stdio.h>
int main()
{
    int i, skip = 5;
    for (i = 0; i < 10; i++)
    {
        if (i == 5) // Please remmeber == not =
        {
            continue;
        }
        else
        {
            printf("Number is:%d\n", i);
        }
    }

    return 0;
}