#include <stdio.h>
int addVar(int n);
int main()
{
    int a;
    a = 10;
    printf("The address of variable is %u\n",&a);
    addVar(a);
    return 0;
}
int addVar(int n)
{
   printf("The address of variable using function is %u\n",&n);
   return 0;
}