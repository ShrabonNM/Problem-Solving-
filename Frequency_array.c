#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0 ; i<n ;i++){
       if(max<arr[i]){
        max =arr[i];
       }
    }
    int fr[max+1];
    for(int i = 0 ; i<=max ;i++){
        fr[i]=0;
    }
    for(int i = 0 ; i<n ;i++){
        fr[arr[i]]++;
    }
    for(int i = 0; i <= max; i++){
    if(fr[i] > 0){
    printf("Value %d occurs %d times\n", i, fr[i]);
    }
}

    return 0 ;
}
