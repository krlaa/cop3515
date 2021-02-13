/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes 2 user inputed dates reports back which date shows up earlier on a calander
*/

#include <stdio.h>

int main()
{
    // NOTE: These variables are used to hold the sections for the first date ex the date month and year
    int day1;
    int month1;
    int year1;

    // NOTE: These variables are used to hold the sections for the first date ex the date month and year
    int day2;
    int month2;
    int year2;

    // NOTE  This is a loop that runs forever, it only breaks when the user enters in the 0/0/0 date
    while (1)
    {
        printf("Enter the date: ");
        //Scans the first date that has the format day/month/year additionally can accept formats like day-month-year and day.month.year
        // NOTE: The %*[-./] indicates an unassigned value of the regex expression [-./]
        scanf("%2d%*[-./]%2d%*[-./]%4d", &month1, &day1, &year1);

        // NOTE: Checks if the input provided are all zeros if so then breaks the while loop
        if (day1 == 0 && month1 == 0 && year1 == 0)
        {
            break;
        }
        else
        {
            printf("Enter the date: ");
            // NOTE: Scans the second that has the format day, month year
            // NOTE: The %*[-./] indicates an unassigned value of the regex expression [-./]
            scanf("%2d%*[-./]%2d%*[-./]%4d", &month2, &day2, &year2);

            // NOTE: Checks what year is lower then prints out the appropriate statement
            if (year1 < year2)
            {
                printf("The first date is earlier\n");
            }
            else if (year2 < year1)
            {
                printf("The second date is earlier\n");
            }
            else
            {

                // NOTE: Checks what month is lower then prints out the appropriate statement
                if (month1 < month2)
                {
                    printf("The first date is earlier\n");
                }
                else if (month2 < month1)
                {
                    printf("The second date is earlier\n");
                }
                else
                {

                    // NOTE: Checks what day is lower then prints out the appropriate statement
                    if (day1 < day2)
                    {
                        printf("The first date is earlier\n");
                    }
                    else if (day2 < day1)
                    {
                        printf("The second date is earlier\n");
                    }
                }
            }
        }
    }
    // NOTE: Return for the main function
    return 0;
}
