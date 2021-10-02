#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char user, char comp); //Simple snake water and gun game 
int main()
{
    int random;
    char user, comp;

    srand(time(0));      //Makes rand() give random values.
    random = rand() % 3; //Random no. between 1-3

    char choice[3][1] = {{"s"}, {"w"}, {"g"}}; //All choices Snake, Water or Gun
    comp = choice[random][0];                  //Set random computer choice
    //printf("%c",comp);

    int n, result;

    printf("Enter your choice:\n");
    printf("Press 1 for Snake\n");
    printf("Press 2 for Water\n");
    printf("Press 3 for Gun\n");
    scanf("%d", &n); //Taking input from user

    user = choice[n - 1][0];
    result = game(user, comp);
    if (result == 0)    //Result
    {
        printf("Draw\n");
        printf("User: %c Computer: %c\n",user,comp);
    }
    else if (result ==1)
    {
        printf("Win\n");
        printf("User: %c Computer: %c\n",user,comp);
    }
    else
    {
        printf("Lose\n");
        printf("User: %c Computer: %c\n",user,comp);
    }
    
    //printf("%c",user);

    return 0;
}
int game(char user, char comp)
{
    //snake > water
    //water > gun
    //gun > snake

    if (comp == user) //USE '' for characters instead of ""
    {
        return 0;
    }
    else if (user == 's' && comp == 'w') //1 Win snake > water 
    {
        return 1;
    }
    else if (user == 'w' && comp == 's') //2 Lose water < snake
    {
        return -1;
    }
    else if (user == 'w' && comp == 'g') //3 Win water > gun 
    {
        return 1;
    }
    else if (user == 'g' && comp == 'w') //4 Lose gun < water
    {
        return -1;
    }
    else if (user == 'g' && comp == 's') //5 Win gun > snake 
    {
        return 1;
    }
    else if (user == 's' && comp == 'g') //6 Lose snake < gun
    {
        return -1;
    }
    return 0;
}
