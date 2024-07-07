#include <stdio.h>

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("The Calaulated Price of the Product is: %f", value);
}

int main() {
    float value;
    printf("Enter the value here: ");
    scanf("%f", &value);
    calculatePrice(value);
    return 0;
}