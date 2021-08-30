#include <stdio.h>
int pattern(int n);
int main()
{
    //declaring variables
    int n;

    //taking input from user
    printf("Enter a number: \n");
    scanf("%d", &n);

    //showing result to user
    pattern(n);
    return 0;
}
int pattern(int n){
    int c;
    for(size_t i = 1; i<n+1; i++){
        c = 2*i;
        //printf("%d",c); Use for debug
        for(size_t j = 1; j<c; j++){
            printf("*");
        }
    printf("\n");
    }
}
