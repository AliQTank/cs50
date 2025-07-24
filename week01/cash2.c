#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string onePenny = "penny", oneNickel = "nickel", oneDime = "dime", oneQuarter = "quarter";
    string twoPenny = "pennies", twoNickel = "nickels", twoDime = "dimes", twoQuarter = "quarters";
    string coins[8] = {onePenny, oneNickel, oneDime, oneQuarter, twoPenny, twoNickel, twoDime, twoQuarter};
    int penny = 1, nickel = 2, dime = 5, quarter = 25;
    int quarterCount = 0, dimeCount = 0, nickelCount = 0, pennyCount = 0;
    int oneCoin = 1, twoCoin = 2, threeCoin = 3, fourCoin = 4;
    int amountOfcoins[4] = {oneCoin, twoCoin, threeCoin, fourCoin};
    int cash, cost;
    
    do {
        cash = get_int("How many total cents i get? ");
    } while (cash < 0);
    
    do {
        cost = get_int("price cost in cents: ");
    } while (cost > cash);
    
    float change = cash - cost;    
}


    