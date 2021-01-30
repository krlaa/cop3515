/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input of a phone number with letters and converts it into a proper telphone number
*/
// NOTE: Imports
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Main function
 * Runs the program and takes phone number with letters and coverts to proper telephone syntax
 */
int main()
{
    //Creates a char array(string) which allows 14 characters used for the number,letters and symbols and 1 char reserved for the null
    char finalOutput[15];

    //Var used for loop
    int i;

    //prompts the user to enter a number to be converted
    printf("Enter phone number: ");

    /** 
     * A simple for loop using the size of the char array(string) "finalOutput"
     * Gets the userInput with getchar function and stores it into a char varibale "userI"
     * Changes the char obtained from user input and casts to a int "ordChar"
     * Checks "ordChar" and compares to predefined values in a if/esle if statements and converts apporopriately
     * If the user presses the enter key a null character will get appended to the char array "finalOutput" and breaks the loop
    */
    for (i = 0; i < sizeof(finalOutput); i++)
    { 
        //user input
        char userI = getchar();

        //char to unicode
        int ordChar = userI;

        if (userI == '\n')
        {
            finalOutput[i] = '\0';
            break;
        }
        else
        {
            /** 
             * NOTE: Conditions originally used this format: ordChar == 80 || ordChar == 81 || ordChar == 82
             * Current Code makes the it shorter thus taking up less space
             */
            if (ordChar>=65 && ordChar<=67)
            {
                finalOutput[i] = '2';
            }
            else if (ordChar>=68 && ordChar<=70)
            {
                finalOutput[i] = '3';
            }
            else if (ordChar>=71 && ordChar<=73)
            {
                finalOutput[i] = '4';
            }
            else if (ordChar>=74 && ordChar<=76)
            {
                finalOutput[i] = '5';
            }
            else if (ordChar>=77 && ordChar<=79)
            {
                finalOutput[i] = '6';
            }
            else if (ordChar>=80 && ordChar<=82)
            {
                finalOutput[i] = '7';
            }
            else if (ordChar>=83 && ordChar<=85)
            {
                finalOutput[i] = '8';
            }
            else if (ordChar>=86 && ordChar<=88)
            {
                finalOutput[i] = '9';
            }
            else
            {
                finalOutput[i] = userI;
            }
        }
    }

    /**
     * uses the length of the string "finalOutput" and uses putchar to print out individual chars
     */
    for (i = 0; i < strlen(finalOutput); i++)
    {
        putchar(finalOutput[i]);
    }

    //Return of main function
    return (0);
}
