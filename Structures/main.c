#include <stdio.h>
#include <string.h>

struct info {
    char name[20];
    int numb;
};

void main() {
    struct info s1;
    s1.numb = 22;
    strcpy(s1.name, "Harsha");

    printf("Name: %s\n", s1.name);
    printf("Numb: %d", s1.numb);
}