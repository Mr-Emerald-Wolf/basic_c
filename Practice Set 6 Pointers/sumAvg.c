#include <stdio.h>
void sumAvg(int a,int b,int *x,float *y);

int main()
{
    int a = 5,b = 3,sum;
    float avg;
    sumAvg(a, b, &sum, &avg);
    printf("The sum is %d\n",sum);
    printf("The average is %f\n",avg);
    return 0;
}
void sumAvg(int a,int b,int *x,float *y)
{

    int sum = a + b;
    float avg = (a+b)/2;
    *x = sum;
    *y = avg;
}