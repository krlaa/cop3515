/**
 * Name: Kevin Antony
 * COP 3515 Advanced Program Design
 * Purpose: Reads from two files and merges the content in the two files and creates an output file
 */

#include <stdio.h>
#include <string.h>

//main method
int main()
{
    // NOTE: Init the file variables
    FILE *releasesFile, *yearFile, *finalOutFile;

    // NOTE: Init the strings/char array for the sentances read by fgets
    char releaseBuff[80];
    char yearBuff[80];

    //Opens the files names and reads from them
    releasesFile = fopen("./Releases.txt", "r");
    yearFile = fopen("./Year.txt", "r");

    //Opens the file and preps to write
    finalOutFile = fopen("releasesOutput.txt", "w");

    //checks if they are null and prints error
    if (releasesFile == NULL ||yearFile == NULL ||finalOutFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    // NOTE: While loops through until one of the fget funcitons return a NULL value
    while (fgets(releaseBuff, 80, releasesFile) != NULL && fgets(yearBuff, 80, yearFile) != NULL)
    {

        //Removes the newline char from the input read from the corresponding file
        releaseBuff[strcspn(releaseBuff, "\n")] = 0;
        yearBuff[strcspn(yearBuff, "\n")] = 0;

        //Prints based on the format year :release
        printf("%s :%s\n", yearBuff, releaseBuff);
        
        //fprintf writes to a stream with formating 
        fprintf(finalOutFile, "%s :%s\n", yearBuff, releaseBuff);
    }
    //closes the files 
    fclose(releasesFile);
    fclose(yearFile);
    fclose(finalOutFile);
    //main method return
    return 0;
}
