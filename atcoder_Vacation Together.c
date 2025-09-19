#include<stdio.h>

int main()
{
    int r , c;
    scanf("%d %d",&r,&c);

    char arr[r][c];
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf(" %c",&arr[i][j]);
        }
    }

    int free_Col[c];


    for(int j = 0 ; j<c ; j++){
        int got = 0 ;
        for(int i = 0 ; i<r ; i++ ){
            if(arr[i][j]=='x'){
                got = 1 ;
                break;
            }
        }
        if(got==1) free_Col[j] = 0 ;
        else free_Col[j] = 1;
    }


    for(int i = 0 ; i<c ; i++){
        printf("%d ",free_Col[i]);
    }

    int ans = 0 ;

    for(int j =  0 ; j<c ; j++){
        if(free_Col[j]==1){
            int len = 1;
            for(int j2 = j+1 ; j2<c ;j2++){
                if(free_Col[j2]==1){
                    len++;
                }
                else {
                    break;
                }
            }
            if(len>ans){
                ans = len ;
            }
        }
    }

    printf("\n%d\n",ans);



    return 0 ;
}
