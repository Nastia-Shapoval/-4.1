#include <stdio.h>

int main() {
    int price = 450;
    int discount = 15;
    int finalPrice = price - (price * discount / 100);
    printf("Price after discount: %d UAH\n", finalPrice);
    return 0;
}
