#include <stdio.h>

void hello_World();
void message();
void printgreetIndian();
void printgreetJapanese();

int main() {
    hello_World();
    message();

    char ch;
    printf("Enter i for the Indian Greet & j for the Japanese Greet: ");
    scanf("%c", &ch);
    if(ch == 'i') {
        printgreetIndian();
    }d
    else if(ch == 'j') {
        printgreetJapanese();
    }
    else {
        printf("Sorry Entered wrong Character unable to Greet you now :(");
    }
    return 0;
}

void hello_World() {
    printf("Hello there, Welcome to the Programming.\n");
    printf("Hi My Name is Harsha\n");
}

void message() {
    printf("Good Bye Dear.\n");
}

void printgreetIndian() {
    printf("Namaskara\n");
}

void printgreetJapanese() {
    printgreetIndian();
    printf("Konichiwa\n");
}