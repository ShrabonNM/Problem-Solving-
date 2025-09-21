#include <stdio.h>

int main() {
    char arr[9][9];


    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (arr[i][j] == '*') {
                printf("%c%d\n", 'a'+(j - 1),8-i+1);
            }
        }
    }

    return 0;
}
