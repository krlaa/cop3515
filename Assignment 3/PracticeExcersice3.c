#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
int compare_dates(struct date d1, struct date d2);
int main(int argc, char const *argv[])
{

    struct date Date1;
    struct date Date2;

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
            else
            {
           compare_dates(Date1,Date2);
            }
        }
    }
    return 0;
}

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