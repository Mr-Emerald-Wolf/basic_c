#include <stdio.h>
int main()
{
    int a;
    a = 3;
    printf("%d %d %d",a,++a,a++); // YOU EXPECT 3 4 4 Right?? RUN PROGRAM
    // HEHEHEHEHE YOU FELL FOR IT FOOL
    // GCC TAKES ARGUMENTS FROM RIGHT TO LEFT      LEFT  <---- RIGHT ASK INTERVIEWER FOR ARGUMENT ORDER L ---> R or L <--- R (Depends on compiler)
    // a <--- ++a <--- a++
    // print(5) <--- printf(4 + 1) <--- printf(3) then add 1
    //   5                 5                3
    //Thank you harry bhaiya
    return 0;
}