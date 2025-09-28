#include <stdio.h>

int func(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int X;
        scanf("%d", &X);
        sum += X;
    }
    //int avg = sum / n;
    printf("Average In Function: %d\n", sum);
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int value = func(n);
    printf("Average In Main: %d\n", value);
    return 0;
}
