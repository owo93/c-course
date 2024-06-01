#include <stdio.h>

int main() {
    int x = 10;
    float y = 15.5;
    float z = 20.05;
    printf("x: %d\ny: %.2f\nz: %.2f\n", x, y, z); // Print x, y and z with 2 decimal places
    float sum = x + y + z; // Add x and y and store the result in sum
    printf("The sum of %d, %.2f and %.2f is %.2f\n", x, y, z, sum); // Print the sum of x and y with 2 decimal places
}