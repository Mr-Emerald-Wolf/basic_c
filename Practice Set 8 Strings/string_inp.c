#include<stdio.h>
int main()
{
    char first_n[30];
    char name[30];

    char *ptr = "Helllo World"; //Stores string in memory and assigns address to ptr
    ptr = "New World"; //Can be reinitialised or changed
    printf("%s\n",ptr);

    char ptr2[] = "My World"; 

    //ptr2 = "No World"; //Cannot be reinitialised or changed
    printf("%s\n",ptr2);


    printf("Enter your Full Name: "); 
    gets(name); // Gets can recieve a full string 
    printf("Your full name is: %s\n",name);
     
    printf("Enter your First Name: ");
    scanf("%s",first_n);    // Scanf can only recieve one word 
    //  puts() prints string 
    printf("Your first name is: %s\n",first_n);

    return 0;
}