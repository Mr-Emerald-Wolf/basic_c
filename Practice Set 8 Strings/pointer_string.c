#include<stdio.h>
int main()
{
    char str1[] = "Jello";
    char *ptr1 = str1;
    printf("%u\n",ptr1);
    printf("%c\n",*(ptr1));

    printf("%u\n",++ptr1);
    printf("%c\n",*(ptr1));

    return 0;
}