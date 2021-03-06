/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input of a dollar amount up to 200 then prints out change
*/

//Imports
#include <stdio.h>

//Main function
int main()
{
    //Variable to hold the users input
    int userI;

    //Var used for for loop
    int i;

    printf("Please enter your change: ");
    scanf("%d", &userI);

    //This checks if the value is greater than 200 if it is then implements a recursive loop back into the function after prompting to enter a value less than 200
    if (userI > 200)
    {
        printf("Amount larger than 200 please enter an amount less than 200\n");

        //recursive main function
        main();
    }

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

    //For loop to handle the numbers 1-9
    for (i = 0; i < userI; i++)
    {
        printf("$1 ");
    }

    //return for main function
    return 0;
}
