#include <stdio.h>
int main()
{
    int n,count; //Declaring variables and recieving input
    count = 10;
    printf("Enter number:");
    scanf("%d", &n);

    for (size_t i = 0; i < count; i++) //basic for loop
    {
        printf("%d Multiplied with %d: %d\n",n,i+1,((i+1)*n));
    }
    
    return 0;
}