/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input of a phone number with letters and converts it into a proper telphone number
*/
// NOTE: Imports
#include <stdio.h>

/**
 * Main function
 * Runs the program and takes phone number with letters and coverts to proper telephone syntax
 */
int main()
{
    //char init for user input
    char userI;
    //prompts the user to enter a number to be converted
    printf("Enter phone number: ");

    //runs while the user does not hit enter
    while ((userI = getchar()) != '\n')
    {

        //char to ascii
        int ordChar = (int)userI;

        /** 
             * NOTE: Conditions originally used this format: ordChar == 80 || ordChar == 81 || ordChar == 82
             * changes the userI variable to the correct corresponding value
             */
        if (ordChar >= 65 && ordChar <= 67)
        {
            userI = '2';
        }
        else if (ordChar >= 68 && ordChar <= 70)
        {
            userI = '3';
        }
        else if (ordChar >= 71 && ordChar <= 73)
        {
            userI = '4';
        }
        else if (ordChar >= 74 && ordChar <= 76)
        {
            userI = '5';
        }
        else if (ordChar >= 77 && ordChar <= 79)
        {
            userI = '6';
        }
        else if ((ordChar >= 80 && ordChar <= 83) && ordChar != 81)
        {
            userI = '7';
        }
        else if (ordChar >= 84 && ordChar <= 86)
        {
            userI = '8';
        }
        else if (ordChar >= 87 && ordChar <= 89)
        {
            userI = '9';
        }

        //finally putchar the userI variable
        putchar(userI);
    }
    //Return of main function
    return (0);
}
