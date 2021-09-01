#include <stdio.h>
int fib(int n);
int main()
{
    int n; //Declaring variables and recieving input

    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("%d Term of the fibonacci series is: %d\n", n, fib(n));
    return 0;
}
int fib(int n)
{
    int f;
    if(n==1 || n==0){
        return 1;
    }
    else{
        f = fib(n-1) + fib(n-2);
        return f;
    }

}

