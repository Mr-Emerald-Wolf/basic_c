#include<stdio.h>
int main()
{
    char str1[] = {'S','h','i','v','a', 'm', '\0'}; // \0 tells compiler the string has terminated 
    char str2[] = "JOJO REFERENCE";
    for (size_t i = 0; i < 6; i++)  //First way to print a string 
    {
        printf("%c",str1[i]);
    }
    
    printf("\n");   
    printf("%s\n ",str2);   // Second way to print a string 
    return 0;
}