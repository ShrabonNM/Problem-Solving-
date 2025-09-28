#include <stdio.h>

char func() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    return ch;
}

int main() {
    char value = func();
    printf("Value received from main: %c\n", value);
    return 0;
}
