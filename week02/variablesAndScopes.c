#include <stdio.h>

int incremet(int a);
int main (void)
{
    int x = 1;
    int y;
    y = incremet(x);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
int incremet(int a)
{
    a++;
    return a;
}