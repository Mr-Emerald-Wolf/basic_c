#include<stdio.h>
int main()
{
    int n,table[10];
    printf("Enter a number: \n");
    scanf("%d",&n);
    for (size_t i = 0; i < 10; i++)
    {
       table[i] = n*(i+1);
    }
    for (size_t i = 0; i < 10; i++)
    {
       printf("Multiple %lu of %d is: %d\n",i+1,n,table[i]);
       
    }
    
    
    return 0;
}