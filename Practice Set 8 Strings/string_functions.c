#include <stdio.h>
#include <string.h>
int main()
{
    char str1[45] = "Rohan";
    int a = strlen(str1); //String length
    printf("%d\n", a);

    char str2[50];      //Str[50] only dictates maximum size, does not create string of size of 50.
    strcpy(str2, str1); //copys string
    printf("%s\n", str2);

    char str3[20] = " & Vedant"; //Joining strings
    strcat(str2, str3);          // First argument string will contain concatenated string
    printf("%s\n", str2);

    int b = strcmp(str1, str3); //strcmp(a,b) compares alphabeticaly ASCII characters, Positive if alpha(a)>>alpha(b), Negative if alpha(b)>>alpha(a) & 0 if same string or length compare.
    printf("%d\n", b);     
    int check = strcmp("For","Joke");
    printf("%d\n",check);                                             // zeta > and                  apple < man              hel < hello
    return 0;
}