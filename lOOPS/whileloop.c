#include <stdio.h>

int main() {
    char name[] = "Harsha";
    int count = 0;
    do
    {
        printf("%s\n", name);
        count++;
    } while(count < 5);
    return 0;
}