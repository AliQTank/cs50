#include <stdio.h>

int const arraySize = 5; // Define a constant for the size of the array

int main(void)
{
    // Declare an array
    int numbers[arraySize];
    // Populate the array with values
    numbers[0] = 1;
    for (int i = 1; i < arraySize; i++)
    {
        /* code */
        numbers[i] = numbers[i - 1] * 2; // Fill with consecutive integers
    }
    
    // Print the values in the array
    for (int i = 0; i < arraySize; i++) {
        printf("%d\n", numbers[i]); 
    }
}