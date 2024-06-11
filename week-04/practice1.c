#include<stdio.h>

// 1.) Write code to create input number, string and print the result. (scanf())
int main()
{
    int number; // Define number variable
    printf("Enter your number: ");
    scanf("%d", &number); // Input number, assign to number variable

    char string[50]; // Define string variable with 50 characters
    printf("Enter your string: ");
    scanf("%s", string); // Input string, assign to string variable

    printf("Number: %d\nString: %s\n", number, string);
    return 0;
}
