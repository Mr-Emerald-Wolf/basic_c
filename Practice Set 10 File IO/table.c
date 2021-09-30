#include <stdio.h>
int main()
{
    int n, count; //Declaring variables and recieving input
    count = 10;
   
    FILE *ptr;    //Setting up file for writing
    ptr = fopen("table.txt","w");
    printf("Enter number:");
    scanf("%d", &n);

    for (size_t i = 0; i < count; i++) //basic for loop
    {
        printf("%d Multiplied with %lu: %lu\n", n, i + 1, ((i + 1) * n));
        fprintf(ptr, "%d Multiplied with %lu: %lu\n", n, i + 1, ((i + 1) * n));
    }

    return 0;
}