#include <cs50.h>
#include <stdio.h>
#include <string.h> // Library not included in the original code for string manipulation
#include <ctype.h> // Library for character type functions, specifically added for isalpha function


int main(void) {
    bool inWord = false; // Flag to track if we are inside a word
    int letters = 0; // number of letters
    int s; // average number of sentences per 100 words
    int sentences = 0; // number of sentences per 100 words
    int words = 0; // Total number of words   
    int spaces = 0; // Total number of spaces
    // Readability index calculation
    // Coleman-Liau index formula: index = 0.0588 * L - 0.296 * S - 15.8
    // where L is the average number of letters per 100 words and S is the average number of sentences per 100 words.
    // The index is rounded to the nearest integer.
    // The index corresponds to a grade level, where 1 is first grade, 2 is second grade, and so on.
    // If the index is greater than 16, the text is suitable for a college graduate  
    float wordsIndex = words / 100; // average number of words per 100 words, not
    float lettersAv = letters / 100; //avergae number of letters per 100 words, not sure if this is needed
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
             text[0] == '\x0c' || text[0] == '\x0d' || text[txtLength - 1] == ' ') ;
        
    txtLength = strlen(text);
    char prev = '\0';
    
    
    for (size_t i = 0; i < txtLength; i++)
    {
        char c = text[i];

        // Count letters
        if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z') ) {
            letters++;
        }
        
        // Count words
         if (isalpha(text[i])) {
            if (!inWord) {
                inWord = true;
                words++;
                }
            }
            else
            {
                inWord = false;
            }


        // Count sentences
        if ((c == '.' || c == '!' || c == '?') && !(prev == '.' || prev == '!' || prev == '?'))
        {
            sentences++;
        }
        
        // Count spaces
        if (c == ' ') {
            spaces++;
        }          
    }
    if (sentences == 0 && txtLength > 0) 
    {
        sentences = 1;
    }
    // I have to insert a condition to calculate the grade level
    
    printf("Number of letters: %d\n", letters);
    printf("Number of words: %d\n", words);   
    printf("Number of sentences: %d\n", sentences); // PARTIALLY WORKING, COMMAS DONT SEPARATE SENTENCES
    printf("WORDS INDEX: %.2f\n", wordsIndex);
}