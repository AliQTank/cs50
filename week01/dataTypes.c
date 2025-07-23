#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int number;
    char letter;
    float decimal;
    string text;
    number = get_int("Enter an integer: ");
    letter = get_char("Enter a character: ");
    decimal = get_float("Enter a decimal number: ");
    text = get_string("Enter a string: ");
    printf("You entered: %d, %c, %.2f, %s\n", number, letter, decimal, text);
    return 0;
}