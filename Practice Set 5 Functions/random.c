#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    time_t seconds;         //Time datatype
    seconds = time(0);      // returns the time elapsed since 00:00:00 UTC, January 1, 1970. in seconds // src:https://www.journaldev.com/41447/time-function-in-c-plus-plus
    printf("%ld\n", seconds); //%ld is time_t holder

    srand(time(0));   //Makes rand() give random values.
    n = rand() % 100 + 1; //Random no. between 0-100

    printf("Random no. between 1-100: %d\n",n);

    return 0;
}