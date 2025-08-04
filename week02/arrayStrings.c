// ...existing code...

// Example: Copy string 'src' to 'dest'
char src[] = "hello";
char dest[100]; // Make sure dest is large enough

int main(void)
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
        // Optionally, add a null terminator at the end
        dest[i + 1] = '\0';
    }
    // Now dest contains a copy of src
    
    // ...existing code...

}