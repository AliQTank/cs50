#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdint.h>

int const totalLetters = 26; 
bool onlyDigits(string keyNumber);
// This is an array of integers representing the ASCII values of the lowercase letters a-z.
// Each integer corresponds to a letter in the alphabet, starting from 'a' (0x61) to 'z' (0x7A).
// This array can be used for various purposes, such as checking if a character is a lowercase letter or
// for creating a cipher like the Caesar cipher.
// Note: The integers are in hexadecimal format, which is a base-16 numbering system.
// The values can be used directly in comparisons or calculations involving lowercase letters.
// The array is defined as a constant, meaning its contents cannot be changed after initialization.
// It is suitable for use in contexts where you need to check if a character is a lowercase letter.
int const abecedarian[] = {
    0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
    0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70,
    0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
    0x79, 0x7a
};

// This is an array of integers representing the ASCII values of the uppercase letters A-Z.
// Each integer corresponds to a letter in the alphabet, starting from 'A' (0x41) to 'Z' (0x5A).
// This array can be used for various purposes, such as checking if a character is an uppercase letter or
// for creating a cipher like the Caesar cipher.
// Note: The integers are in hexadecimal format, which is a base-16 numbering system.
// The values can be used directly in comparisons or calculations involving uppercase letters.
// The array is defined as a constant, meaning its contents cannot be changed after initialization.
// It is suitable for use in contexts where you need to check if a character is an uppercase letter.
int const abecedary[] = {
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48,
    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50,
    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
    0x59, 0x5a
};

// This is a string containing all the letters of the alphabet in both lowercase and uppercase.
// It can be used for various purposes, such as checking if a character is a letter or
// for creating a cipher like the Caesar cipher.
// Note: The string is null-terminated, which means it ends with a '\0'
// This is a string literal, which is stored in read-only memory.
// It is not modifiable, so you cannot change the contents of this string.
// If you need a modifiable version, you can use a character array instead.
// It is suitable for use in contexts where you need to check if a character is a letter.
const char *abecedaryArray = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// This is a character array containing all the letters of the alphabet in both lowercase and uppercase.
// It can be modified if needed, unlike the string literal above.
// Note: This array is not null-terminated, so it does not end with a '\0'.
// It is suitable for use in contexts where you need to modify the contents.
// This array is useful for operations that require a fixed-size array of characters.
// It can be used for various purposes, such as checking if a character is a letter or
// for creating a cipher like the Caesar cipher.
char abecedaryArray2[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argv[1] == NULL || !isdigit(argv[1][0]))
    {
        /* code */
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // argv[1][0] = tolower(argv[1][0]);
    string key = argv[1];
    string plaintext = get_string("plaintext: ");
    int textLength = strlen(plaintext);
    char *plaintext2 = plaintext; // Create a pointer to the plaintext string
    int keyNumber = atoi(key);
    int remainder = keyNumber % totalLetters;
    char ciphertext[5000]; // Assuming a maximum length of 5000 for ciphertext

    // Initialize the ciphertext array with null characters
    memset(ciphertext, '\0', sizeof(ciphertext));

    for (int i = 0, n = textLength; i < n; i++) {
        // Check if the character is a lowercase letter
        if (islower(plaintext[i])) {
            // Calculate the new character using the Caesar cipher formula
            ciphertext[i] = (plaintext[i] - 'a' + remainder) % totalLetters + 'a';
        }
        // Check if the character is an uppercase letter
        else if (isupper(plaintext[i])) {
            // Calculate the new character using the Caesar cipher formula
            ciphertext[i] = (plaintext[i] - 'A' + remainder) % totalLetters + 'A';
        }
        // If the character is not a letter, keep it unchanged
        else {
            ciphertext[i] = plaintext[i];
        }

    }

    printf("argc: %d\n", argc);
    printf("argv[0]: %s\n", argv[0]);
    printf("argv[1]: %s\n", key);    

    // int key2 = strtoimax(argv[1], NULL, 10);
    // int remainder = key % totalLetters;
    // string plainText = get_string("plaintext: ");
    // printf("remainder: %d\n", remainder);
    printf("ciphertext: %s\n", ciphertext);
    onlyDigits(key);
    printf("keyNumber: %d\n", keyNumber);
    printf("remainder: %d\n", remainder);
};

bool onlyDigits(string keyNumber)
{
    int length = strlen(keyNumber);
    for (int i = 0, n = length; i < n; i++)
    {
        if (!isdigit(keyNumber[i]))
        {            
            printf("Usage: ./caesar key\n");
            return false;
        }
    }    
    return true;
}