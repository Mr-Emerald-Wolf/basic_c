#include <stdio.h>
//Sum is a function which takes a and b as parameters and returns a + b.
int sum(int a, int b); //Function prototype

int main() 
{
    int c;
    c = sum(2,4);
    printf("The result is: %d",c);
    return 0;
}

int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}