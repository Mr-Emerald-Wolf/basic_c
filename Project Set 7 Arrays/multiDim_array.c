#include <stdio.h>
int main()
{
    int a, b; //Declaring variables and recieving input
    printf("Enter number of students: ");
    scanf("%d", &a);
    printf("Enter number of subjects: ");
    scanf("%d", &b);

    int marks[a][b];

    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            printf("Enter marks of subject %d for student %d: ",j+1,i+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            printf("Marks of student %d in subject %d: %d\n",i+1,j+1,marks[i][j]);
        }
    }
   
    return 0;
}