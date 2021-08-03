#include <stdio.h>
#include <ctype.h>
int main()
{
    int str1; //declaring var & recieving input from user
    printf("Enter a character:\n");
    scanf("%c", &str1); //Use ascii to characters

    if (str1 >= 97 && str1 <= 122)
    {
        printf("Character is lowercase.\n");
    }
    else
    {
        printf("Character is not lowercase.\n");
    }

    return 0;
}