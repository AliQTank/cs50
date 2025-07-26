#include <cs50.h>
#include <stdio.h>

int const abecedaryLength = 26;
int const howManyPointsPerLetter[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string const abecedaryArray = "abcdefghijklmnopqrstuvwxyz";

int main(void)
{
    // Prompt user for a string
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    
    // Print the string back to the user
    printf("Hello, %s!\n", player1);
    
    return 0;
}