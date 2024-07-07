#include <stdio.h>

int findfarheneit(int degree);

int main() {
    printf("The converted value from the degree celcius to Farheneit is: %d", findfarheneit(50));
    return 0;
}

int findfarheneit(int degree) {
    int F = (degree * 9/5) + 32;
    return F;
}