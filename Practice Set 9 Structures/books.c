#include <stdio.h>
#include <string.h>
struct books
{
    int code;
    float price;
    char name[100];
    
};

int main()
{
    struct books b1, b2, b3;
    struct books amazon[10]; //Array 0f structures of 10 books 
    
    

    b1.code = 20;
    b1.price = 500;
    strcpy(b1.name, "King Arthur");

    b2.code = 21;
    b2.price = 450;
    strcpy(b2.name, "Sherlock Homes"); 
    
    b3.code = 22;
    b3.price = 600;
    strcpy(b3.name, "Mr.Feynman");

    printf("%f\n",b1.price);
    printf("%s\n",b1.name);

    printf("%u\n",&b1.code);  // Structures store same data type under same block of memory
    printf("%u\n",&b1.price);
    printf("%u\n\n",&b1.name);
    
    printf("%u\n",&b2.code);  // Similar structs are not grouped together in memory 
    printf("%u\n",&b2.price);
    printf("%u\n\n",&b2.name);
     
    printf("%u\n",&b3.code);  
    printf("%u\n",&b3.price);
    printf("%u\n\n",&b3.name);


    return 0;
}