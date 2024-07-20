#include <stdio.h>

void ReverseSequence(char *str, int n1, int n2);

int main() {
    char str[] = "HELLO";
    int n1 = 1, n2 = 3;

    printf("Original String Name: %s\n", str);
    ReverseSequence(str, n1, n2);
    printf("Reverse String Name: %s", str);
    return 0;
}

void ReverseSequence(char *str, int n1, int n2) {
    for(int i=n1, j=n2; i<j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }    
}