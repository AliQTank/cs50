#include <cs50.h>
#include <stdio.h>
#include <string.h> // Library not included in the original code for string manipulation


int main(void) {
    int letters = 0; // Average number of letters per 100 words
    int sentences = 1; // Average number of sentences per 100 words
    int words = 1; // Total number of words    
    float index = 0.0588 * letters - 0.296 * sentences - 15.8;
    int txtLength;
    string text;

    // Get input text from the user
    do
    {
        /* code */
        text = get_string("Text: ");
    } while (text == NULL || strlen(text) == 0 || text[0] == '\0' || text[0] == ' ' ||
             text[0] == '\n'  || text[0] == '\r' || text[0] == '\t' || text[0] == '\v' ||
             text[0] == '\f' || text[0] == '\a' || text[0] == '\b' || text[0] == '\e' ||
             text[0] == '\f' || text[0] == '\v' || text[0] == '\0' || text[0] == '\x00' ||
             text[0] == '\x20' || text[0] == '\x09' || text[0] == '\x0a' || text[0] == '\x0b' ||
             text[0] == '\x0c' || text[0] == '\x0d');
        
    txtLength = strlen(text);
    
    
    for (size_t i = 0; i < txtLength; i++)
    {
        char c = text[i];

        // Count letters
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
            letters++;
        }
        
        // Count words
        if (c == ' ' || c == '\n' || c == '\t') {
            words++;
        }

        // Count sentences
        if (c == '.' || c == '!' || c == '?' || c == ';' || c == ':') {
            sentences++;
        }            
    }
    printf("Length of text with spaces: %d\n", txtLength);
    printf("Number of words: %d\n", words);    
}