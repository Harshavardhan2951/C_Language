#include <stdio.h>

void printHP(int count);

int main() {
    int n;
    scanf("%d", &n);
    printHP(n);
    return 0;
}

//Recursive Funtion
void printHP(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello Programmer Welcome to Linux Dist\n");
    printHP(count - 1);
}

