#include <stdio.h>
int main()
{
    int n, rem, i = 2, flag = 1; //Declaring variables and recieving input

    printf("Enter a number: ");
    scanf("%d", &n);

    do // In DO - WHILE seperate condition for number 2 is needed because do-while loop divides 2/2 to give rem 0.
    {
        rem = n % i++;
        //printf("%d\n",i); Good Debug
        if (rem == 0 && n != 2)
        {
            flag = 0; //Not prime
            break;
        }
    } while (i < n);

    if (flag == 1)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("It is not a prime number.\n");
    }

    return 0;
}