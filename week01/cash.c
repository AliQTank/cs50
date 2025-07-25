#include <stdio.h>
#include <cs50.h>

void print_commas(void);
void print_messageStarter(void);
void print_spaces(void);
void print_coins(int count, string coin_name);// AUTOMATICALLY ADDED FUNCTION PROTOTYPE


int main(void)
{
    string onePenny = "penny", oneNickel = "nickel",oneDime = "dime", oneQuarter = "quarter";
    string twoPenny = "pennies", twoNickel = "nickels",twoDime = "dimes", twoQuarter = "quarters";
    string coins[8] = {onePenny, oneNickel, oneDime, oneQuarter, twoPenny, twoNickel, twoDime, twoQuarter};
    int penny = 1, nickel = 5, dime = 10, quarter = 25;
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

    do {

        if (change >= quarter)
        {
            if (change / quarter > 1)
            {
                if (change % quarter != 0) {
                    printf("%d %s", change / quarter, coins[7]);// STILL TO CORRECT
                    change = change % quarter;
                    print_commas();
                }
                else {
                    printf("%d %s", change / quarter, coins[7]);
                    quarterCount = change / quarter;
                    change = change % quarter;
                    print_commas();
                }
                /* code */
            } else {
                printf("%d %s", oneCoin, coins[3]);
                (change % quarter != 0) ? print_commas() : printf("\n");
                change = change % quarter;
                // print_commas();
            }
            
            //printf("this lines prints as long as change is greater or equal than quarter\n");
        }
        else if (change >= dime)
        {
            if (change / dime > 1)
            {
                if (change % dime != 0) {
                    printf("%d %s", change / dime, coins[6]);// STILL TO CORRECT
                    change = change % dime;
                    print_commas();
                }
                else {
                    printf("%d %s\n", change / dime, coins[6]);
                    quarterCount = change / dime;
                    change = change % dime;
                }
                
            } else {
                printf("%d %s", oneCoin, coins[2]);
                (change % dime != 0) ? print_commas() : printf("\n");
                change = change % dime;                
            }
            
        }
        else if (change >= nickel)
        {
            if (change / nickel > 1)
            {
                if (change % nickel != 0) {
                    printf("%s", coins[5]);// STILL TO CORRECT
                    change = change % nickel;
                    print_commas();
                }
                else {
                    printf("%d %s\n", change / nickel, coins[5]);
                    quarterCount = change / nickel;
                    change = change % nickel;
                }
                
            } else {
                printf("%d %s", oneCoin, coins[1]);
                (change % nickel != 0) ? print_commas() : printf("\n");
                change = change % nickel;                
            }
            
        }
        else if (change >= penny)
        {
            /* code */
            if (change / penny > 1)
            {
                if (change % penny != 0) {
                    printf("%s", coins[4]);// STILL TO CORRECT
                    change = change % penny;                    
                }
                else {
                    printf("%d %s\n", change / penny, coins[4]);
                    quarterCount = change / penny;
                    change = change % penny;
                }
                
            } else {
                printf("%d %s\n", oneCoin, coins[0]);
                change = change % penny;
            }
        }
        else if (change == 0)
        {
            printf("You have no change left\n");
            return 0;
        }
        
    
        
        
        // printf("Change owed: %i\n", change); // Debugging line to check change left
    } while (change > 0);    
    

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
    printf(", ");
}

void print_messageStarter(void) {
    printf("You have enough for ");
}