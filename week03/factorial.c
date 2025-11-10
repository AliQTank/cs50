#include <cs50.h>
#include <stdio.h>
int f(int n);
int main(void)
{
    int number;
    do {
        number = get_int("Number :");
    } while (number < 0);

    int result = f(number);
    printf("%i\n", result);
    
}

int f(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * f(n - 1);
    }
}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 + collatz(3 * n + 1);
    }
}