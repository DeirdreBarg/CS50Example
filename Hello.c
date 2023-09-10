// Include CS50 and Standard I/O headers
#include <cs50.h>
#include <stdio.h>

// Main function
int main(void)
{
    // Get a string input from the user
    string name = get_string("What's your name? ");
    printf("Hello, %s!\n", name);

    // Get an integer input from the user
    int age = get_int("How old are you? ");
    printf("You're %d years old %s!\n", age, name);
}
