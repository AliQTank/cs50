#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    // Prompt users input for a string
    string text = get_string("Input text: ");
    
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