#include <stdio.h>
int main() {
    int n ;
    scanf("%d",&n);
    int arr[n] ;
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int new_element ;
    scanf("%d",&new_element);
    arr[n] = new_element;
    n++;


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
