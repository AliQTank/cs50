#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //name
    string name = get_string("What is your name? ");
    //age
    int age = get_int("What is your age? ");
    //hometown
    string hometown = get_string("What is your hometown? ");
    //phone number
    string phoneNumber = get_string("What is your phone number? ");

    printf("My new friends name is %s, %i, they are from %s, and their phone number is %s\n", name, age, hometown, phoneNumber);
}

