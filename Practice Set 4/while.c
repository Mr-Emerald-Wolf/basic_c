#include <stdio.h>
int main()
{
    int a;
    a = 0;
    while(a<=10){
        printf("Print loop Counter 1: %d",++a); //Increment then print
        printf(" Print loop Counter 2: %d\n",a++); //Print then Increment
        
    }
    return 0;
}