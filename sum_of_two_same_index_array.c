 #include <stdio.h>

int main() {

    int n;
    scanf("%d", & n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    int b_arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & b_arr[i]);
    }
    int arr_sum[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum[i] = arr[i] + b_arr[i];

    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_sum[i]);
    }

    //	printf("%d",sum);




    return 0;
}
