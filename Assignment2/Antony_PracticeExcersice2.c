#include <stdio.h>
#include <stdlib.h>

int main()
{

    int day1;
    int month1;
    int year1;
    int day2;
    int month2;
    int year2;

    while (1)
    {
        printf("Enter the date: ");
        scanf("%d/%d/%d", &day1, &month1, &year1);
        if (day1 == 0 && month1 == 0 && year1 == 0)
        {
            break;
        }
        else
        {
            printf("Enter the date: ");
            scanf("%d/%d/%d", &day2, &month2, &year2);

            if(year1<year2){
                printf("The first date is earlier");                
            }
            else if(year2<year1)
            {
                printf("The second date is earlier"); 
            }
            else{
                
            if(month1<month2){
                printf("The first date is earlier");                
            }
            else if(month2<month1)
            {
                printf("The second date is earlier"); 
            }
            else{
                
            if(day1<day2){
                printf("The first date is earlier");                
            }
            else if(day2<day1)
            {
                printf("The second date is earlier"); 
            }
            }
            }
            
        }
    }

    return 0;
}
