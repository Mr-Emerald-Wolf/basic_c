#include <stdio.h>
int main()
{
    int n,rem,flag=1; //Declaring variables and recieving input

    printf("Enter a number: ");
    scanf("%d",&n);
    
   
    for (size_t i = 2; i < n; i++) //Note to self c doesn't give 50/0 error. It just skips code.
    {
        rem = n%i;
        //printf("%d %d %d\n",n,i,rem); for debug
        if (rem==0) // == not = (IT STRAIGHT UP SKIPS OTHERWISE)
        {
            printf("Not a prime number.\n");
            flag = 0;
            break;
        }
        
        
    }
    if (flag==1) //No for-else in c
    {
        printf("It is a prime number.\n");
    }
    
    
    return 0;
}