#include <stdio.h>
void printArray(int *ptr, int n);
void changeArray(int arr1[]);
int main()
{
    //declaring variables
    int marks[5]= {22,58,45,72,84};
    int *ptr;
    ptr = marks;  // Instead of using &array to bind address to pointer
                  // we can simply use ptr = arr1;
                  // For variable it is ptr = &a;
     
    changeArray(marks); //Because arrays are mutable that's why change in value is reflected outside function
    printArray(ptr,5);
    
    return 0;
}
void printArray(int *ptr, int n)
{
    for(size_t i = 0; i<n; i++)
    {
        // Printing the marks of students   
        printf("The value of marks of student %d is: %d \n",i+1,*ptr);
        printf("The value of address %d is: %u \n",i+1,ptr);

        ptr++; // Adding 1 to ptr shifts ptr value by 4
               // int stores 4 bytes on memory so address of next array item is +4
               // char stores 1 byte 
    }
    
}
void changeArray(int arr1[])
{
    arr1[1] = 50; // CHanges to array inside function reflect global 
}