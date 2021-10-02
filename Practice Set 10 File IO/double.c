#include <stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    ptr1 = fopen("double.txt", "r");

    int n;

    fscanf(ptr1,"%d",&n);
    printf("%d",n);
    fclose(ptr1);

    ptr2 = fopen("double.txt", "w");
    fprintf(ptr2,"%d",n*2);
    fclose(ptr2);
    return 0;
}