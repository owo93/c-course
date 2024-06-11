#include <stdio.h>

int main() {
    // Define variables
    char name_surname[50];
    int id;

    // Input name and surname
    printf("Enter your name-surname: ");
    scanf("%99[^\n]", name_surname);

    // Input ID
    printf("Enter your ID: ");
    scanf("%d", &id);

    // Display given input
    printf("Name-Surname: %s\nID: %d\n", name_surname, id);
    return 0;
}