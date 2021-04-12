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
    char message [80];
    char c;
    char temp1;
    int i = 0;
    int shift;
    int j = 0;
    printf("Enter a message");
    *fgets(message,80,stdin);
    
    printf("enter a shift amount: ");
    
    scanf("%d", &shift);

    for (j = 0; j < strlen(message); j++)
    {
        // printf("before : %c\n", message[j]);
        if(message[j]==' '){
            continue;
        }
        else{
            if (message[j]+shift>'z'||(message[j]+shift>'Z'&&message[j]<'a'))
            {
                message[j] = ((message[j] + shift)-26);
            }
            else
            {
                message[j] = message[j] + shift;
            }
            
        
        }
    }
    printf("%s",message);

    return 0;
}
