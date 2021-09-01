#include <stdio.h>
int main()
{
     int sum,i; //Declaring variables
     i = 1;
     sum = 0;

     while (i<11) //for sum of first 10 natural numbers
     {
         sum += i++; // sum  = 0 +1 , i = 1+1
         printf("SUM %d, i %d\n",sum,i);
     }
     printf("The sum of first 10 natural numbers is:%d",sum);
     return 0;
}