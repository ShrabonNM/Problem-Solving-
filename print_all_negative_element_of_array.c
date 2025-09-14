#include<stdio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];


    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int d = 0;
    int val = 0;
    int n_arr[n];
    for(int i = 0 ; i<n; i++ ){
        if(arr[i]<val){

            n_arr[d] = arr[i];
            d++;
        }
    }


      for(int i = 0 ; i<d ;i++){
        printf("%d ",n_arr[i]);
    }








    return 0;
}

