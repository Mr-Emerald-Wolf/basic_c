#include<stdio.h>
int main()
{
    int tables[3][10]; //Initialising variables and taking input from user 
    int numbers[3];

    printf("Enter first number: \n");
    scanf("%d",&numbers[0]);

    printf("Enter second number: \n");
    scanf("%d",&numbers[1]);
    
    printf("Enter third number: \n");
    scanf("%d",&numbers[2]);
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            tables[i][j] = numbers[i]*(j+1);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            printf("Multiple %lu of number %d is: %d\n",j+1,numbers[i],tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}