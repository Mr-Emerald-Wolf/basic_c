#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Hello World";
    char b[]= "d";
    int count = 0;
    for (size_t i = 0; i < strlen(a); i++)
    {
        if (a[i]==b[0])
        {
            count++;
        }
    }
    printf("The number of occurences of character %c in the word %s are: %d\n",b[0],a,count);
    return 0;
}