#include <stdio.h>
int main()
{
    FILE *ptr;

    //ptr = fopen("sample.txt","w");  //Opens file for writing

    ptr = fopen("sample.txt", "r"); //For writing a file
    int num1, num2;
    char c; 

    if (ptr == NULL)
    {
        printf("The file does not exist.\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1); //Print only numbers  -> 1 number
        printf("The value of number is: %d\n", num1);
        fscanf(ptr, "%d", &num2);
        printf("The value of number is: %d\n", num2);
        c = fgetc(ptr);
        
           
        while (c != EOF)  //Print entire file 
        {
            printf("%c",c);
            c = fgetc(ptr);
        }
            
        
        
        fclose(ptr);
    }

    return 0;
}