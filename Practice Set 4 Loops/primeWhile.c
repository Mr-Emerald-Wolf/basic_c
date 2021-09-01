#include <stdio.h>
int main()
{
    int n, rem, i, flag = 1; //Declaring variables and recieving input
    i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i<n)
    {
        rem = n % i++;
        if (rem == 0)
        {
            flag = 0;//Not prime
            break;
        }
    }
    if (flag == 1)
    {
        printf("It is a prime number.\n");
    }
    else{
        printf("It is not a prime number.\n");
    }

    return 0;
}