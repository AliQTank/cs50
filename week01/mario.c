#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
    //prompt user for input of blocks
    int height;
    do {
        height = get_int("how tall is the pyramid? ");

    } while (height < 1);

    

    //print a pyramid of that high
    for (int i = 0; i < height; i++)
    {
        /* code */
        print_row(i);
    }
    
    

}

void print_row(int bricks)
{
    for (int i = 0; i <= bricks; i++)
    {
        /* code */
        printf("#");
    }
    printf("\n");
} 