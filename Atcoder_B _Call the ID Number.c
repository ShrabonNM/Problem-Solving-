#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n+1];
    for(int i = 1 ; i <= n ; i++){
        scanf("%d",&arr[i]);
    }

    int fr[n+1];
    for(int i = 1 ; i <= n ; i++){
        fr[i]=0;
    }
    for(int i = 1 ; i <= n ; i++){
        if(fr[i]==0){
            fr[arr[i]]=1;
        }
    }
    int ans = 0;
     for(int i = 1 ; i <= n ; i++){
        if(fr[i]==0){
            ans++;
        }
    }
    printf("%d\n",ans);
     for(int i = 1 ; i <= n ; i++){
        if(fr[i]==0){
            printf("%d ",i);
        }
    }
    printf("\n");










    return 0 ;
}
