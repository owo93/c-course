#include<stdio.h>

// 5.) Write code to input 2 values and compare the values
int main()
{
    int x, y;
    printf("Enter 2 values: ");
    scanf("%d %d", &x, &y);

    if (x == y) // Compare x and y
        printf("x and y are equal\n");
    else if (x > y)
        printf("x is greater than y\n");
    else
        printf("y is greater than x\n");

    return 0;
}
