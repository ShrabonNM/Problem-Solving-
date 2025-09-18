#include<stdio.h>
int main ()
{
    int  r , c ;
    scanf("%d %d",&r,&c);
    char arr[r][c];
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ;j++){
            scanf(" %c",&arr[i][j]);
        }
    }

    int cnt = 0 ;
     for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ;j++){
           if(arr[i][j]=='#'){
             cnt ++;
           }
        }
    }

    printf("%d\n",cnt);






    return 0 ;
}
