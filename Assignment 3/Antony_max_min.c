#include "stdio.h"
#define N 10

//Function declaration for max_min
void max_min(int a[], int *max, int *min);

int main()
{
    //init an array with the constant size of N or 10
    int a[N];

    //Variable to hold spaces and new line chars for the while loops below
    char temp1;

    //Variable to hold the counters for the position in the array when looping
    int i = 0;

    //init max and min variables which will be manipulated with pointers
    int max, min;

    //Prompts the user to enter a list of numbers
    printf("Enter a array size of 10: ");

    //While the user hasnt pressed enter scanf funciton scns into the array based on index i
    while (temp1 != '\n')
    {
        scanf("%d%c", &a[i], &temp1);
        i++;
    }

    //checks if number of numbers entered by the users is not 10 if not then goes into recursion else continues and does the max_min function
    if (i != 10)
    {
        printf("You did not enter 10 numbers, try again\n");
        main();
    }
    else
    {
        max_min(a, &max, &min);
    }

    //Return for main funciton
    return 0;
}

//max_min function
void max_min(int a[], int *max, int *min)
{
    //Makes max and min into the first item in the array
    *max = a[0];
    *min = a[0];
    int i = 0;
    //for loop which loops through array, checks and assigns to max and min with pointers
    for (i = 0; i < N; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }

    //prints out to the terminal which number is the smallest and largest number in the array
    printf("Largest: %d\n", *max);
    printf("Smallest: %d\n", *min);
}