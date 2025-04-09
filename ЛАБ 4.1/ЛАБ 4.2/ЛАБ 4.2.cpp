#include <stdio.h>

int main() {
    int birthYear, currentYear = 2025;
    printf("Enter your birth year: ");
    scanf_s("%d", &birthYear);
    int age = currentYear - birthYear;
    printf("Your age: %d years\n", age);
    return 0;
}

