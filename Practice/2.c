#include <stdio.h>

int main() {
    int a = 51, b;

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int diff = a - b;

    if(b > a) {
        diff *= 3;
        printf("Since Input value is > the Given Value, therefore the tripled value is: %d", diff);
    }
    else {
        printf("The Absolute difference between the value is: %d", diff);
    }
    return 0;
};
