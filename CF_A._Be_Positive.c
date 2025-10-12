#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){

    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a;i++){
        scanf("%d",&arr[i]);
    }
    int z = 0 ;
    for(int i = 0 ; i<a ; i++){
        if(arr[i]==0) z++;
    }
    int N = 0;
    for(int i = 0 ; i<a;i++){
        if(arr[i]==-1) N++;
    }
    int ans = z + 2*(N%2);

    printf("%d\n",ans);



 }

return 0;
}
