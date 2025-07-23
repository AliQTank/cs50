#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int penny = 1, nickel = 2, dime = 5, quarter = 25;
    float cash, cost;
    do {
        cash = get_int("How much cash i get? ");
    } while (cash <= 0);

    do
    {
        cost = get_float("price cost: ");
        /* code */
    } while (cost > cash);

    if (cash - cost > quarter)
    {
        /* code */
    }
    else if (cash - cost > dime)
    {
        /* code */
    }
    else if (cash - cost > nickel)
    {
        /* code */
    }
    else if (cash - cost > penny)
    {
        /* code */
    }
    else if (cash - cost == 0)
    {
        /* code */
    }
    

    
    
    printf("Change owed: %.2f\n", cash - cost);
}