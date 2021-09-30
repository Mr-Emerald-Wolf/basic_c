#include <stdio.h>
int main()
{
    int flag = 0; //To copy content twice
    char c;

    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("output.txt","w");
    ptr2 = fopen("input.txt","r");

    c = fgetc(ptr2);

    while (flag<2)
    {
        printf("%c",c);
        
        if (c == EOF)
        {
            flag++;
            fclose(ptr2);
            ptr2 = fopen("input.txt","r");
            
        }
        fputc(c, ptr1);
        c = fgetc(ptr2);
    }
    fclose(ptr2);
    fclose(ptr1);
    return 0;
}