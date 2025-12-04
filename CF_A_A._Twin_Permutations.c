#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int i = 1 ; i<=n ; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i = 1  ; i<=n ; i++){
            printf("%d ",n+1-arr[i]);
        }
        printf("\n");
    }


}
