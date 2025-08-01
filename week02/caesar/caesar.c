#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdint.h>

int const totalLetters = 26; 
int onlyDigits(string zeroToNine);
int const abecedarian[] = {
    0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
    0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70,
    0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
    0x79, 0x7a
};

int const abecedary[] = {
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48,
    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50,
    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58,
    0x59, 0x5a
};

const char *abecedaryArray = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
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

    printf("argc: %d\n", argc);
    printf("argv[0]: %s\n", argv[0]);
    printf("argv[1]: %s\n", key);    

    // int key2 = strtoimax(argv[1], NULL, 10);
    // int remainder = key % totalLetters;
    // string plainText = get_string("plaintext: ");
    // printf("remainder: %d\n", remainder);
    // printf("plaintext: %s\n", plainText);

};

int onlyDigits(string zeroToNine)
{
    for (int i = 0, n = strlen(zeroToNine); i < n; i++)
    {
        if (!isdigit(zeroToNine[i]))
        {
            return 0; // Not all characters are digits
        }
    }
    return 1; // All characters are digits
}