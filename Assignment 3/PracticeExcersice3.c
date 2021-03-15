/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes 2 user inputed dates and returns back which date shows up earlier on a calander
*/

#include <stdio.h>

//struct for date model holds 3 ints for day, month, year
struct date
{
    int day;
    int month;
    int year;
};

//Funciton declaration for comparing date structs
int compare_dates(struct date d1, struct date d2);

//main function
int main(int argc, char const *argv[])
{
    //Dates as structs to be filled from user input
    struct date Date1;
    struct date Date2;

    //while loop allows the user to keep entering and checking dates until they are done
    while (1)
    {
        //user prompt for the first date
        printf("Enter the date 1 (mm/dd/yy): ");
        //Scans the first date that has the format day/month/year additionally can accept formats like day-month-year and day.month.year
        // NOTE: The %*[-./] indicates an unassigned value of the regex expression [-./]
        scanf("%d%*[-./]%d%*[-./]%d", &(Date1.month), &(Date1.day), &(Date1.year));

        // NOTE: Checks if the input provided are all zeros if so then breaks the while loop
        if (Date1.day == 0 && Date1.month == 0 && Date1.year == 0)
        {
            break;
        }
        else
        {
            //user prompt for the second date
            printf("Enter the date 2 (mm/dd/yy):");
            // NOTE: Scans the second that has the format day, month year
            // NOTE: The %*[-./] indicates an unassigned value of the regex expression [-./]
            scanf("%d%*[-./]%d%*[-./]%d", &(Date2.month), &(Date2.day), &(Date2.year));

            // NOTE: Checks if the input provided are all zeros if so then breaks the while loop
            if (Date2.day == 0 && Date2.month == 0 && Date2.year == 0)
            {
                break;
            }
            else
            {
                //calls the compare dates function then returns what the earlier date is
                compare_dates(Date1, Date2);
            }
        }
    }
    return 0;
}

//function init for compare dates uses the 2 date structs and compares which is earlier.
int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.year > d2.year)
    {
        return 1;
    }
    else
    {

        // NOTE: Checks what month is lower then prints out the appropriate statement
        if (d1.month < d2.month)
        {
            return -1;
        }
        else if (d1.month > d2.month)
        {
            return 1;
        }
        else
        {

            // NOTE: Checks what day is lower then prints out the appropriate statement
            if (d1.day < d2.day)
            {
                return -1;
            }
            else if (d1.day > d2.day)
            {
                return 1;
            }
            else
            {
                // NOTE: Return 0 if they are the same
                return 0;
            }
        }
    }
}