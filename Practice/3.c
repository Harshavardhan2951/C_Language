#include <stdio.h>
#include <string.h>

#define buffer              50
typedef struct Person {
    char name[buffer];
    int roll, age;
    float cgpa;
}prsn;

void printInfo(prsn prs);

int main() {
    prsn prs1;
    printf("Enter the Name of the Perso: ");
    fgets(prs1.name, buffer, stdin);
    prs1.name[strlen(prs1.name) - 1] = '\0';

    printf("Enter the Roll no: ");
    scanf("%d", &prs1.roll);

    printf("Enter the Age: ");
    scanf("%d", &prs1.age);

    printf("Enter the Cgpa: ");
    scanf("%f", &prs1.cgpa);

    printInfo(prs1);
    return 0;
}

void printInfo(prsn prs) {
    printf("Details Info: \n");
    printf("Name of the Person: %s\n", prs.name);
    printf("Person's Roll no: %d\n", prs.roll);
    printf("Person's Age: %d\n", prs.age);
    printf("Person CGPA: %f\n", prs.cgpa);
}