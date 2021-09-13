#include<stdio.h>
void reverseArray(int arr1[],int n,int rev1[]);
void reverseList(int arr1[],int len);
int main()
{
    int array1[] = {1,2,3,4,5,6,7,10}; //Initialise Array 

    size_t len = sizeof(array1)/sizeof(array1[0]); //Use this to calculate length of an array
    printf("Size of array is %d\n",len);

    int reverse1[len]; // Reverse list
    //reverseArray(array1,len,reverse1);
    reverseList(array1,len);

    for (size_t i = 0; i < len; i++) // Print reversed array 
    {
        printf("Value of %d element in array is: %d\n",i+1,array1[i]);
    }
    return 0;
}
void reverseArray(int arr1[],int n,int rev1[])
{
    for (size_t i = 0; i < n; i++)
    {
        rev1[i] = arr1[n-i-1];
    }
    
}
void reverseList(int arr1[],int len)
{
    int n,temp;
    n = len/2;
    for (size_t i =0; i < n; i++)
    {
        temp = arr1[i];
        arr1[i] = arr1[len - i - 1];
        arr1[len - i - 1] = temp;
    }
}
