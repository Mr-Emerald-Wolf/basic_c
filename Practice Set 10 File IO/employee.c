#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("salary.txt","w");
    char name[20]; 
    char sal[20];

    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter name of employee: ");
        fgets(name,20,stdin); //New input function
        fprintf(ptr, "%s", name);

        putc(',',ptr);

        printf("Enter salary of employee: ");
        fgets(sal, 20,stdin);
        fprintf(ptr, "%s\n",sal);
        
        printf("\n");
    }
    fclose(ptr);
    return 0;
}