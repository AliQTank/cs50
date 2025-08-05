#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

const int TOTAL_LETTERS = 26;

// Function declarations
bool onlyDigits(string key);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // Check if exactly one command-line argument is provided and it's a valid number
    if (argc != 2 || !onlyDigits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert the key from string to integer and take modulo 26
    int key = atoi(argv[1]) % TOTAL_LETTERS;

    // Prompt the user for plaintext input
    string plaintext = get_string("plaintext: ");

    // Print the encrypted result
    printf("ciphertext: ");

    // Loop through each character in the plaintext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Encrypt and print each character using the rotate function
        printf("%c", rotate(plaintext[i], key));
    }

    printf("\n");
    return 0;
}

// Checks if the given string consists only of digits
bool onlyDigits(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

// Encrypts a single character using the Caesar cipher
char rotate(char c, int key)
{
    // If the character is lowercase, apply rotation using 'a' as the base
    if (islower(c))
    {
        return (c - 'a' + key) % TOTAL_LETTERS + 'a';
    }
    // If the character is uppercase, apply rotation using 'A' as the base
    else if (isupper(c))
    {
        return (c - 'A' + key) % TOTAL_LETTERS + 'A';
    }
    // If it's not an alphabetic character, return it unchanged
    else
    {
        return c;
    }
}
