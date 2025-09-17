#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd = 1;

    // Find GCD using loop
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // Find LCM using formula
    int lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}

