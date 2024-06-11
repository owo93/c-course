#include<stdio.h>

// 3.) Write code to input 4 values and calculate the values. (A-B*C/D)
int main()
{
    int A, B, C, D; // Define 4 integer variables
    printf("Enter 4 values: ");
    scanf("%d %d %d %d", &A, &B, &C, &D); // Input 4 values, assign to A, B, C, D variables

    int result = A - B * C / D; // Calculate the result

    printf("Result: %d\n", result);
    return 0;
}
