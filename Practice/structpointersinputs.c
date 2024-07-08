#include <stdio.h>

typedef struct Person {
    int age;
    float height;
} prsn;

int main() {
    prsn *ptr, person1;

    ptr = &person1;

    printf("Enter You're Age: ");
    scanf("%d", &ptr->age);

    printf("Enter You're Height: ");
    scanf("%f", &ptr->height);

    printf("Age of the Person is: %d\n", ptr->age);
    printf("Height of the Person %f", ptr->height);

    return 0;
}