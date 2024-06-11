#include<stdio.h>

// 4.) Write code to input 2 values and use Division (/) and Modulus (%) to calculate it.
int main() {
    int num1, num2; // Define 2 integer variables
    printf("Enter 2 values: ");
    scanf("%d %d", &num1, &num2); // Input 2 values, assign to num1, num2 variables

    int division = num1 / num2; // Calculate the division
    int modulus = num1 % num2; // Calculate the modulus

    printf("Division: %d\nModulus: %d\n", division, modulus);
    return 0;
}
