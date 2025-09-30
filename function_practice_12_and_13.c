#include <stdio.h>

int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void GeneratePrime(int N) {
    printf("Prime less than %d: ", N);
    for (int i = 2; i < N; i++) {
        if (IsPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int GenNthPrime(int N) {
    int count = 0, num = 1;
    while (count < N) {
        num++;
        if (IsPrime(num)) {
            count++;
        }
    }
    return num;
}

int main() {
    int n;

    printf("Enter a number to generate primes less than it: ");
    scanf("%d", &n);
    GeneratePrime(n);

    printf("Enter N to find the Nth prime: ");
    scanf("%d", &n);
    printf("%dth Prime: %d\n", n, GenNthPrime(n));

    return 0;
}


