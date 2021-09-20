#include <stdio.h>
void slice(char *str,int m, int n);
int main()
{
    char test[] = "HelloWorld";
    /* printf("%u\n", &test[0]); //%s always recieves pointer of string
    printf("%u\n",test); */

    slice(test,3,5);
    printf("%s\n",test);
    return 0;
}
void slice(char *str,int m, int n)
{

    int i = 0;
    while ((i+m)<n)
    {
        str[i] = str[i+m];
        i++;
    }
    str[i]='\0'; // Please NOTE '/0' is null character NOT "/0"

}
