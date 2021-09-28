#include <stdio.h>
typedef struct complex
{
    float real;
    float img;
}complexN;

int main()
{
    complexN c1;
    c1.real = 10;
    c1.img = 5;

    struct complex CList[5]; //Array of 5 complex numbers 
    complexN NList[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Enter real component of number %d: \n",i+1);
        scanf("%f",&CList[i].real);
        printf("Enter imaginary component of number %d: \n",i+1);
        scanf("%f",&CList[i].img);
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        float a = CList[i].real;
        float b = CList[i].img;
        printf("Complex number %d is: (%f) + i(%f)\n",i+1,a,b);
    }

    

    return 0;
}