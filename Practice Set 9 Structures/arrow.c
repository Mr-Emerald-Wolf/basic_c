#include <stdio.h>
#include<string.h>
typedef struct books
{
    int code;
    float price;
    char name[100];
}book;

int main()
{
    book *b1;
    b1->code = 20;
    b1->price = 500;
    strcpy(b1->name, "King Arthur");

    printf("%u\n",b1);
    printf("%u\n",&b1->code);
    printf("%u\n",&b1->price);
    printf("%u\n",b1->name);

    return 0;
}