#include <stdio.h>

int main() {
    float price, discount;
    printf("Enter the product price: ");
    scanf_s("%f", &price);
    printf("Enter the discount percentage: ");
    scanf_s("%f", &discount);
    float finalPrice = price - (price * discount / 100);
    printf("Final price: %.2f\n", finalPrice);
    return 0;
}
