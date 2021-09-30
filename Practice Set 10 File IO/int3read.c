#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r");
    int num[3];
    for (size_t i = 0; i < 3; i++)
    {
        fscanf(ptr,"%d",&num[i]);
        printf("Number %d is: %d\n",i+1,num[i]);
    }
        
    return 0;
}