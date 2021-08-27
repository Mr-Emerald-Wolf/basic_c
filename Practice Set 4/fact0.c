#include <stdio.h>
#include <math.h>
int main()
{
    int zero, n;
    int exp, div, j; //exponent value, GIF, exponent power
    //float div,n;
    int t;
    scanf("%d", &t); //No. of test cases is t

    for (size_t i = 0; i < t; i++)  
    {

        zero = 0;        //No. of trailing zeroes
        j = 1;           //exponent power
        scanf("%d", &n); //Number given

        while (1) //Maths function GREATEST integer
        {
            exp = pow(5, j);
            div = n / exp; //Can also use wierd 9/5 != 1.8 but 9/5 = 1 int property to get GIF but floor function is more readable. Try INT 9/5 vs Float 9/5.
            zero += div;
            //printf("Exp:%f Div:%f Zero:%f\n", exp, div, zero); //SUPER GOOD DEBUG TOOL
            j++;
            if (div == 0)
            {
                printf("%d\n", zero); //No. of trailing zeroes
                break;
            }
            
        }
    }
    return 0;
}