#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
     for(int i = 1 ; i<=n ;i++){
        printf("%d ",arr[n-i]);
     }

    return 0 ;
}
