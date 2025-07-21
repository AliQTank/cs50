#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);
void spacesPrinted(int spaces);

int main(void)
{
    //prompt user for input of blocks
    int height;
    do {
        height = get_int("how tall is the pyramid? ");

    } while (height < 1);

    

    //print a pyramid of that high
    // i++ chagned to 1--
    //i changed from 0 to height3
    // conditional changes from i < height to 1 > 0


    for (int i = height - 1; i >= 0; i--)
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

void spacesPrinted(int spaces)
{
    for (int i = 0; i <= spaces; i++)
    {
        printf(" ");
    }
}