#include <stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int n = 5;
    square(n);
    _square(&n);
    return 0;
}

void square(int n) {
    n = n*n;
    printf("The Square of the given number is: %d", n);
}

void square(int* n) {
    *n = (*n) * (*n);
    printf("The Adress of the Number is: %d", *n);
}