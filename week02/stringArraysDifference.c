#include <stdio.h>

int main(void)
{
    // Pointer to a string literal (read-only)
    const char *str1 = "hello";
    // Character array (modifiable)
    char str2[] = "hello";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // This is allowed:
    str2[0] = 'H'; // Now str2 is "Hello"
    printf("Modified str2: %s\n", str2);

    // This is NOT allowed and will cause an error or crash:
    // str1[0] = 'H'; // Don't do this!

    return 0;
}