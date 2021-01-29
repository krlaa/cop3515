/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input of a dollar amount up to 200 then prints out change
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int userI;

    printf("Please enter your change: ");
    scanf("%d", &userI);

    /** NOTE: Uses a while loop to continuously subtract if the value orginally inputted mod dollar bill presets are less than user input 
     * Example: userI = 24
     * userI(24) % 100 = 24 which is not greater than userI
     * Therefore the first while loop will not run
     * Trails down eventually to the for loop used to handle the ones place since x % 1 will alwyas equal 0
    */
    
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
