#include <stdio.h>
typedef struct vector       //Datatype to hold a 2D vector
{
    int x; // i cap
    int y; // j cap
}vector;
vector sumVector(vector a, vector b);       //Finds sum of 2 vectors 
int main()
{
    vector a1,a2;
    vector result;
    a1.x = 5;   //Vector 1
    a1.y = 4;   

    a2.x = -5;  //Vector 2
    a2.y = 4;

    result = sumVector(a1,a2);
    printf("X component is: %d\n",result.x);
    printf("Y component is: %d\n",result.y);

    return 0;
}
vector sumVector(vector a, vector b)
{
    vector res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}