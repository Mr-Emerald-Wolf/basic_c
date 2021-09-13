#include<stdio.h>
int main()
{
    int table[10];
    for (size_t i = 0; i < 10; i++)
    {
       table[i] = 5*(i+1);
    }
    for (size_t i = 0; i < 10; i++)
    {
       printf("Multiple %lu of 5 is: %d\n",i+1,table[i]);
       
    }
    
    
    return 0;
}