#include <stdio.h>

struct student {
    int roll;
    char name[30];
    float cgpa;
};

void main() {
    struct student s1 = {21, "ABCDE", 7.823};
    printf("%s\n", s1.name);

    struct student *prt = &s1;
    printf("%s", (*prt).name);
    printf("%s", prt->name);
}