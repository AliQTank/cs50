#include <stdio.h>
#include <cs50.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int height;
    do {
        height = get_int("how tall is the pyramid? ");
    } while (height < 1);

    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}