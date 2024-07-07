#include <stdio.h>
#include <math.h>

#define pi              3.145

void calculate_Square(int a) {
    float result = pow(a, 2);
    printf("The resultant Area of a square is: %f", result);
}

void calculate_Rectangle(int l, int b) {
    int rect_Result = l * b;
    printf("The Area of the rectangle is: %d", rect_Result);
}

void calculate_Circle(int r) {
    int circle_Result = 2 * pi * r;
    printf("Therefore the Area of the Circle is: %d", circle_Result);
}

int main() {
    int a, l, b, r;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    

    printf("Enter the value of l: ");
    scanf("%d", &l);

    printf("Enter the value of b: ");
    scanf("%d", &b);
    

    printf("Enter the value of r: ");
    scanf("%d", &r);
    calculate_Square(a);
    calculate_Rectangle(l, b);
    calculate_Circle(r);

    return 0;
}