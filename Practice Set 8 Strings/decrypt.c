#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Ibqqz";
    printf("%s\n", a);
    
    for (size_t i = 0; i < strlen(a); i++)
    {
        int val = (int)(a[i]);
        val--;
        a[i] = (char)(val);
    }
    printf("%s\n",a);

    
    return 0;
}