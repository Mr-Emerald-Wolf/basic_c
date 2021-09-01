#include <stdio.h>
int sumN(int n);
int main()

{
    //declaring variables
    int n;

    //taking input from user
    printf("Enter a number: \n");
    scanf("%d", &n);

    //showing result to user
    printf("The sum of first %d natural numbers is: %d \n",n,sumN(n));

    return 0;
}
int sumN(int n){
    int f;
    if(n==1 || n==0){
        return 1;
    }
    else {
        f = n + sumN(n-1);
        return f;
    }
}
