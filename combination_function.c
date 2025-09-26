#include <stdio.h>

int factorial(int c) {
    int fact = 1;
    for (int i = 1; i <= c; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);

    int nr = n - r;
    float combination = (float) factorial(n) / (factorial(nr) * factorial(r));

    printf("%.0f\n", combination);
    return 0;
}
