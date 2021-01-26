#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char input[15];
    int keepGoing = 1;
    int i = 0;
    while (keepGoing)
    {
        char userI = getchar();
        int ordChar = userI;
        if (userI == '\n')
        {
            input[i] = '\0';
            break;
        }
        else
        {
            if (ordChar == 65 || ordChar == 66 || ordChar == 67)
            {
                input[i] = '2';
            }
            else if (ordChar == 68 || ordChar == 69 || ordChar == 70)
            {
                input[i] = '3';
            }
            else if (ordChar == 71 || ordChar == 72 || ordChar == 73)
            {
                input[i] = '4';
            }
            else if (ordChar == 74 || ordChar == 75 || ordChar == 76)
            {
                input[i] = '5';
            }
            else if (ordChar == 77 || ordChar == 78 || ordChar == 79)
            {
                input[i] = '6';
            }
            else if (ordChar == 80 || ordChar == 81 || ordChar == 82)
            {
                input[i] = '7';
            }
            else if (ordChar == 83 || ordChar == 84 || ordChar == 85)
            {
                input[i] = '8';
            }
            else if (ordChar == 86 || ordChar == 87 || ordChar == 88)
            {
                input[i] = '9';
            }
            else
            {
                input[i] = userI;
            }

            i += 1;
        }
    }
    for (int i = 0; i < strlen(input); i++)
    {
        putchar(input[i]);
    }

    return (0);
}
