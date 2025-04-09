#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf_s("%f %f", &x1, &y1);
    printf("Enter coordinates of the second point (x2 y2): ");
    scanf_s("%f %f", &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between points: %.2f\n", distance);
    return 0;
}
