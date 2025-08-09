#include <cs50.h>
#include <stdio.h>

//Define candidate struct
typedef struct 
{
    string name;
    int votes;
} candidate;

int main(void)
{
    const int num = 3;
    candidate candidates[num];

    for (int i = 0; i < num ; i++)
    {
        candidates[i].name = get_string("Name :");
        candidates[i].votes = get_int("Votes :");
        
    }
    
    int highestVote = 0;
    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes > highestVote)
        {
            highestVote = candidates[i].votes;
        }
    }
    
    for (int i =0; i < num; i++)
    {
        if (candidates[i].votes == highestVote)
        {
            printf("%s", candidates[i].name);
        }
    }
}