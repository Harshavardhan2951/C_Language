#include <stdio.h> 

int main() {
    int rice = 1250;
    int *ptr = &rice;

    int **pptr = &ptr;

    printf("Address of age: %p\n", &rice);
    printf("*ptr: %p\n", ptr);
    printf("**pptr: %p", pptr);
}