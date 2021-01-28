/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input of a dollar amount up to 200 then prints out change
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int userI;

    printf("Please enter your change: ");
    scanf("%d", &userI);

    while (userI % 100 < userI)
    {
        userI -= 100;
        printf("$100 ");
    }
    while (userI % 20 < userI)
    {
        userI -= 20;
        printf("$20 ");
    }
    while (userI % 10 < userI)
    {
        userI -= 10;
        printf("$10 ");
    }
    while (userI % 5 < userI)
    {
        userI -= 5;
        printf("$5 ");
    }
    for (int i = 0; i < userI; i++)
    {
        printf("$1 ");
    }

    return 0;
}
