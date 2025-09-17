#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n][n];

    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<n ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0];
    int location_i , location_j ;
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<n ;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                location_i=i;
                location_j = j ;
            }
        }
    }

    printf("Max : %d\n",max);
    printf("Location[%d][%d]",location_i,location_j);






    return 0 ;
}
