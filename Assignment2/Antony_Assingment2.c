/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Takes user input for how long they want the array to be then prompts to enter two arrays then prints out the product and reverse product of the arrays
*/

#include <stdio.h>


//Function declarations for inner product and inner product reverse
int inner_product(int a[], int b[], int n);
int inner_product_reverse(int a[], int b[], int n);

/**
 * Main function
 * Uses  the inner product and inner product reverse functions
*/
int main(int argc, char const *argv[])
{
    //Used as placeholder variable for user input ; to be used as the array length
    int arrLength = 0;

    //Prompts the user to enter the desire size of the array then stores into the varaible arrLength
    printf("Enter desired size of array: ");
    scanf("%d", &arrLength);

    //Arrays which are created from users input
    int a[arrLength];
    int b[arrLength];

    //These are temp varaibles to hold spaces and new line chars for the while loops below
    char temp1, temp2;

    //These are variables to hold the counters for the position in the array when looping
    int i = 0, j = 0;

    //Prompts user to enter the array of n size
    printf("Enter the first array of size %d: ", arrLength);

    /**
     * Using a while loop iterates through the array adding user input number to the array
     * When the user hits the end they press enter breaking the loop
     * uses the i variable to keep track as a counter
     * 
    */
    while (temp1 != '\n')
    {
        scanf("%d%c", &a[i], &temp1);
        i++;
    }

    //Prompts user to enter the array of n size
    printf("Enter the second array of size %d: ", arrLength);

    /**
     * Using a while loop iterates through the array adding user input number to the array
     * When the user hits the end they press enter breaking the loop
     * uses the k variable to keep track as a counter
     * 
    */
    while (temp2 != '\n')
    {
        scanf("%d%c", &b[j], &temp2);
        j++;
    }

    //prints out the return of the inner product function whose inputs were supplied from scans above
    printf("Inner product is: %d\n", inner_product(a, b, arrLength));

    //prints out the return of the inner product reverse function whose inputs were supplied from scans above
    printf("Inner product reverse is: %d", inner_product_reverse(a, b, arrLength));

    //return for main function
    return 0;
}

//inner product funciton 
int inner_product(int a[], int b[], int n)
{
    //variable to hold the final return for this fucntion
    int product = 0;

    //uses a for loop to iterate through arrays and mutlitply a[0]*b[0] + a[1]*b[1] + ... +a[n-1] *b[n-1]
    for (int i = 0; i < (n - 1); i++)
    {
        product += (a[i] * b[i]);
    }
    return product;
}

//inner product reverse funciton 
int inner_product_reverse(int a[], int b[], int n)
{
    //variable to hold the final return for this fucntion
    int productReverse = 0;

    //uses a for loop to iterate through arrays and mutlitply  a[0]*b[n-1] + a[1]*b[n-2] + ... +a[n-1] *b[0]
    for (int i = 0; i < n - 1; i++)
    {
        productReverse += a[i] * b[(n - i) - 1];
    }
    return productReverse;
}