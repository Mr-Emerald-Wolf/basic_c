#include <stdio.h>
int main()
{
    //declaring variables
    int marks[5];

    
    for(size_t i = 0; i<5; i++)
    {
        //taking input from user
        printf("Enter marks of student %d: \n",i+1);
        scanf("%d", &marks[i]);
    }
    for(size_t i = 0; i<5; i++)
    {
        // Printing the marks of students   
        printf("The value of marks of student %d is: %d \n",i+1,marks[i]);
    }

    return 0;
}