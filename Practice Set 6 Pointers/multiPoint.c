#include <stdio.h>
void x10(int *n);
int main()
{
    int a;
    a = 10;
    printf("The value of variable is %d\n",a);
    x10(&a);
    printf("The value of variable after using function is %d\n",a);

    return 0;
}
void x10(int *n)
{
    int c;
    c = *n;
    *n = 10*c;
}