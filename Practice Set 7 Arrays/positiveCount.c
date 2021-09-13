#include<stdio.h>
int main()
{
    int arr1[] = {12,3,-5,75,-9,-5,6,445,6457,-46,654,43,-57};
    int positive = 0;

    size_t len = sizeof(arr1)/sizeof(arr1[0]); //Use this to calculate length of an array
    printf("Size of array is %d\n",len);
    
    

    for(size_t i = 0; i < len; i++)
    {
        if (arr1[i] >= 0) 
        {
            positive += 1;
        }
    }
    printf("No. of positive numbers in array are: %d",positive);
    return 0;
}