#include <stdio.h>
int main()
{
    int num1, num2, num3, num4; //declaring var & recieving input from user

    printf("Enter num1:\n");
    scanf("%d", &num1);

    printf("Enter num2:\n");
    scanf("%d", &num2);

    printf("Enter num3:\n");
    scanf("%d", &num3);

    printf("Enter num4:\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
        {
            printf("Number 1 is greatest:%d\n", num1);
        }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
        {
            printf("Number 2 is greatest:%d\n", num2);
        }
    else if (num3 > num2 && num3 > num1 && num3 > num4)
        {
            printf("Number 3 is greatest:%d\n", num3);
        }
    else if (num4 > num2 && num4 > num3 && num4 > num1)
        {
            printf("Number 4 is greatest:%d\n", num4);
        }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}