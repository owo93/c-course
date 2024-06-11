#include<stdio.h>

// 2.) Write code to create input string and print the result. (fgets())
int main()
{
    char string[50]; // Define string variable with 50 characters
    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin); // Input string, assign to string variable, set size to sizeof(string)

    printf("String: %s\n", string);
    return 0;
}
