#include <stdio.h>

struct student {
    char name[30];
    int roll;
};

void printInfo(struct student s1);

void main() {
    struct student s1 = {"ABCDE", 35};
    printf("Student Name: %s\n", s1.name);

    struct student *ptr = &s1;
    //printf("Pointer with Student Name: %s\n", (*ptr).name);

    printf("Student Name with Arrow Keys: %s\n", ptr->name);
    printf("Student Name with Arrow Keys: %d", ptr->roll);
}