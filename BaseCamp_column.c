#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);
    
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int j = 0; j < n; j++) {
        int found = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i][j] == x) {
                found = 1;
                break;
            }
        }

        if(found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
