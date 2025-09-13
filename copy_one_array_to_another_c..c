#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];
    int c_arr[n];
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i<n ;i++){
        c_arr[i]=arr[i];
    }

     for(int i = 0 ; i<n ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
    // Copied Array from the previous one .
    for(int i = 0 ; i<n ;i++){
        printf("%d ",c_arr[i]);
    }










    return 0 ;
}
