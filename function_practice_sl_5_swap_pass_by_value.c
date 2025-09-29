#include <stdio.h>

void swap(int p, int q) {
    int temp = p;
    p = q;
    q = temp;
    printf("Inside swap: a = %d , b = %d\n", p, q);
    return;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(a, b);
    printf("Outside swap: a = %d , b = %d\n", a, b);

    return 0;
}
