#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello World";
    char check[]= "l";


    for (size_t i = 0; i < strlen(str1); i++)
    {
        if (str1[i]==check[0])
        {
            printf("Character %c is present in string %s.\n",check[0],str1);
            break;
        }
        if (i == strlen(str1) - 1) { //Lets just say my brain is massive 
        printf("Character %c is not present in string %s.\n",check[0],str1);
        }
    }
    
    return 0;
}