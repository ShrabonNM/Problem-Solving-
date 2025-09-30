#include <stdio.h>

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        int div = a % b;
        b = div ;
        a = temp;
    }
    return a;
}


int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int x, y;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);

    if (x <= 0 || y <= 0)
    {
        printf("Break !!!!!!!!!!!!!!!!!!!!!!!!!\n");

    }

    printf("GCD: %d\n", GCD(x, y));
    printf("LCM: %d\n", LCM(x, y));

    return 0;
}
