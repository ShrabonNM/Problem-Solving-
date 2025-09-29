#include<stdio.h>
int func(int n){
    int sum = 0 ;
    int arr[n];
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n ;i++){
        sum+=arr[i];
    }

    printf("Sum In Function: %d\n",sum);
    return sum;


}

int main()
{
    int n;
    scanf("%d",&n);
    int value = func(n);
    printf("Sum In Main:  %d\n",value);




    return 0;
}
