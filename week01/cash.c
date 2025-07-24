#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string onePenny = "penny", oneNickel = "nickel",oneDime = "dime", oneQuarter = "quarter";
    string twoPenny = "pennies", twoNickel = "nickels",twoDime = "dimes", twoQuarter = "quarters";
    string coins[8] = {onePenny, oneNickel, oneDime, oneQuarter, twoPenny, twoNickel, twoDime, twoQuarter};
    int penny = 1, nickel = 2, dime = 5, quarter = 25;
    int quarterCount = 0, dimeCount = 0, nickelCount = 0, pennyCount = 0;
    int oneCoin = 1, twoCoin = 2, threeCoin = 3, fourCoin = 4;
    int amountOfcoins[4] = {oneCoin, twoCoin, threeCoin, fourCoin};
    int cash, cost;
    do {
        cash = get_int("How many total cents do i get? ");
    } while (cash < 0);
    
    do
    {
        cost = get_int("price cost in cents: ");
        /* code */
    } while (cost > cash);
    
    int change = cash - cost;

    if (change >= quarter)
    {
        if (change / quarter > 1)
        {
            if (change % quarter != 0) {
                printf("You have enough for%s\n", coins[7]);// STILL TO CORRECT
            }
            else {
                printf("You have enough for %d %s\n", change / quarter, coins[7]);
                quarterCount = change / quarter;
                change = change % quarter;
            }
            /* code */
        } else {
            printf("You have enough for %d %s\n", oneCoin, coins[3]);
        }
        
        printf("this lines prints as long as change is greater or equal than quarter\n");
    }
    else if (change >= dime)
    {
        if (change / dime > 1)
        {
            if (change % dime != 0) {
                printf("You have enough for%s\n", coins[6]);// STILL TO CORRECT
            }
            else {
                printf("You have enough for %d %s\n", change / dime, coins[6]);
                quarterCount = change / dime;
                change = change % dime;
            }
            /* code */
        } else {
            printf("You have enough for %d %s\n", oneCoin, coins[6]);
        }
        /* code */
    }
    else if (change >= nickel)
    {
        /* code */
    }
    else if (change >= penny)
    {
        /* code */
    }
    else if (change == 0)
    {
        printf("You have no change left\n");
        return 0;
    }
    

    
    
    printf("Change owed: %i\n", change);
}


// Function to print the number of coins
void print_coins(int count, string coin_name)
{
    if (count == 1)
    {
        printf("You have enough for %d %s\n", count, coin_name);
    }
    else
    {
        printf("You have enough for %d %s\n", count, coin_name);
    }
}

void print_spaces(void) {
    printf(" ");
}

void print_commas(void) {
    printf(",");
}