#include <stdio.h>

int* func(int arr[], int n)
{
    static int n_Arr[1000];
    for (int i = 0; i < n; i++)
    {
        n_Arr[i] = arr[i] * 2;
    }
    return n_Arr;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int* result = func(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
