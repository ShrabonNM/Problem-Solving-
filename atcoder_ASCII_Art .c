#include<stdio.h>
int main ()
{
    int h , w;
    scanf("%d %d",&h,&w);
    int  arr[h][w];
    char temp ;
    for (int i = 0 ; i<h ; i++){
        for(int j = 0 ; j<w ;j++){
            scanf("%d",&arr[i][j]);
        }


    }


    for(int i = 0 ; i<h ; i++){
        for(int j = 0 ; j<w ;j++){
           if(arr[i][j]==0){
            printf(".");
           }
          else{
          // int num  = (int)
          printf("%c",arr[i][j]+64);
          }
        }
        printf("\n");
    }

    return 0;
}
