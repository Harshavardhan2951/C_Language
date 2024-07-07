#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int result = a + b;

    if(a == b) {
        result *= 3;
        printf("Same values therefore printed triple their value here: %d", result);
    }
    else {
        printf("\nThe Sum of a+b is: %d", result);
    }

    return 0;
}

