#include <stdio.h>
int main()
{ //DO loop is basically while loop; Do {} holds the while code. while () holds the condition. It is executed atleast once;
    int i = 0, n; //First n natural number 
    printf("Enter number:\n");
    scanf("%d", &n);
    do { //Holds while(){} code. It's executed atleast ONCE.
        printf("Natural Number:%d\n", ++i); //Increment before Print
    } while (i < n); //While loop condition. DOES NOT HOLD CODE.    

    return 0;
}