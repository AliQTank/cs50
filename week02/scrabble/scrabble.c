#include <cs50.h>
#include <stdio.h>

int const abecedaryLength = 26;
int const howManyPointsPerLetter[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                                        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string const abecedaryArray = "abcdefghijklmnopqrstuvwxyz";

int main(void)
{
    int pointsPlayer1 = 0;
    int pointsPlayer2 = 0;
    // Prompt user for a string
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    for (int i = 0; player1[i] != '\0'; i++)
    {
        // Convert to lowercase if it's uppercase
        if (player1[i] >= 'A' && player1[i] <= 'Z')
        {
            player1[i] += 32; // Convert to lowercase
            pointsPlayer1 += howManyPointsPerLetter[player1[i] - 'a'];
        }
        else if (player1[i] >= 'a' && player1[i] <= 'z')
        {
            pointsPlayer1 += howManyPointsPerLetter[player1[i] - 'a'];
        }
        // Ignore non-alphabetic characters
    }

    for (int i = 0; player2[i] != '\0'; i++)
    {
        // Convert to lowercase if it's uppercase
        if (player2[i] >= 'A' && player2[i] <= 'Z')
        {
            player2[i] += 32; // Convert to lowercase
            pointsPlayer2 += howManyPointsPerLetter[player2[i] - 'a'];
        }
        else if (player2[i] >= 'a' && player2[i] <= 'z')
        {
            pointsPlayer2 += howManyPointsPerLetter[player2[i] - 'a'];
        }
        // Ignore non-alphabetic characters
    }
    // Print the string back to the user
    // printf("%s : %i \n%s : %i \n", player1, pointsPlayer1 ,player2, pointsPlayer2);
    // compare the points
    if (pointsPlayer1 > pointsPlayer2)
    {
        printf("Player 1 wins!\n");
    }
    else if (pointsPlayer2 > pointsPlayer1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
