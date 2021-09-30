#include <stdio.h>
int main()
{
    FILE *ptr;
    int num,date;
    char a[] = "A";
    
    num = 8;
    date = 10;
    ptr = fopen("welcome.txt", "w");
    fprintf(ptr, "Welcome to Chaldea\n");
    fprintf(ptr, "Lost Belt %d is set to release on %d Jan\n",num,date);
    putc(a[0], ptr);
    
    fclose(ptr);

    return 0;
}