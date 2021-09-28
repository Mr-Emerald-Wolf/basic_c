#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1; //make structure employee variable
    
    e1.code = 1;
    e1.salary =  5000;
    strcpy(e1.name,"Harry");

    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);

    printf("%u\n",&e1.code);  // Structures store same data type under same block of memory
    printf("%u\n",&e1.salary);
    printf("%u\n",&e1.name);

    int *ptr1 = &e1.code;
    ptr1++;
    printf("%f\n",*ptr1); //Float variable is stored after int variable in memory

    return 0;
}