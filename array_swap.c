#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];

     for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
     }
     int x , y;
     scanf("%d %d",&x,&y);
     int temp = arr[x] ;
     arr[x] = arr[y] ;
     arr[y] = temp ;


     for(int i = 0 ; i<n ;i++ ){
        printf("%d ",arr[i]);
     }






    return 0 ;

}
