#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
int main(int argc, char const *argv[])
{

    struct Date Date1;
    struct Date Date2;

    while (1)
    {
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
            printf("Enter the date 2 (mm/dd/yy):");
            // NOTE: Scans the second that has the format day, month year
            // NOTE: The %*[-./] indicates an unassigned value of the regex expression [-./]
            scanf("%d%*[-./]%d%*[-./]%d", &(Date2.month), &(Date2.day), &(Date2.year));

            if (Date2.day == 0 && Date2.month == 0 && Date2.year == 0)
            {
                break;
            }
            else if (Date1.year < Date2.year)
            {
                printf("The first date comes first on the calendar\n");
            }
            else if (Date1.year > Date2.year)
            {
                printf("The second date comes first on the calendar\n");
            }
            else
            {

                // NOTE: Checks what month is lower then prints out the appropriate statement
                if (Date1.month < Date2.month)
                {
                    printf("The first date comes first on the calendar\n");
                }
                else if (Date1.month > Date2.month)
                {
                    printf("The second date comes first on the calendar\n");
                }
                else
                {

                    // NOTE: Checks what day is lower then prints out the appropriate statement
                    if (Date1.day < Date2.day)
                    {
                        printf("The first date comes first on the calendar\n");
                    }
                    else if (Date1.day > Date2.day)
                    {
                        printf("The second date comes first on the calendar\n");
                    }
                }
            }
        }
    }
    return 0;
}
