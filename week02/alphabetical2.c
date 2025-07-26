#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Check if the user provided a command line argument
    if (argc != 2)
    {
        printf("Usage: ./alphabetical_order <string>\n");
        return 1; // Exit the program with an error code
    }
    
    // Get the string from the command line argument
    string text = argv[1];

    // check if the string is alphabetic
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] < 'A' || text[i] > 'Z') && (text[i] < 'a' || text[i] > 'z'))
        {
            printf("The string contains non-alphabetic characters.\n");
            return 1; // Exit the program with an error code
        }
    }    
    
    // Check if the string is empty
    if (strlen(text) == 0)
    {
        printf("The string is empty.\n");
        return 1; // Exit the program with an error code
    }    
   

    // Calculate the length of the string
    int length = strlen(text);
    
    // Print the characters in alphabetical order
    for (int i = 1; i < length; i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("The string is not in alphabetical order.\n");
            return 1; // Exit the program with an error code
        }       
        
    }
    printf("The string is in alphabetical order.\n");
    return 0; // Exit the program successfully

}