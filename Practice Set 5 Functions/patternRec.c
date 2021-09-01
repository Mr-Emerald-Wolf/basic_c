#include <stdio.h>
int patternRec(int n);
int main()
{
    //declaring variables
    int n;

    //taking input from user
    printf("Enter a number: \n");
    scanf("%d", &n);

    //showing result to user
    patternRec(n);
    return 0;
}
int patternRec(int n) // Using Recursion
{ 
    if(n==1) // BASE CONDITION FOR RECURSION (n ==1 || n == 0) and return 0; at the end. 
    {
        printf("*\n");
        return 0; // This is so important other wise patternRec(0) then patternRec(-1 )---> Stuck; Retuen 0; escapes the function. REMEMBER THIS FOR RECURSION.
    }
    patternRec(n-1);
    for (size_t i = 0; i < 2*n-1; i++)
    {
        printf("*");
    }
    printf("\n");
    

}