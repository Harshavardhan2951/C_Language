#include <stdio.h>

int factorial(int count);

int main() {
    printf("Factorial of a given number %d", factorial(10));
    return 0;
}

int factorial(int count) {
    if( count == 1) {
        return 1;
    }
    int result = count * factorial(count - 1);
    return result;
}