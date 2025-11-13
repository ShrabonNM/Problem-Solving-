#include<stdio.h>
#include<string.h>


int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char arr[3][4];
        for(int i = 0 ; i<3 ; ++i){
            scanf("%s",arr[i]);
        }

        for(int i = 0 ; i<3 ; ++i)
        {
            int a = 0 , b = 0 ,c = 0;

            for(int j = 0 ; j<3 ; ++j){
                if(arr[i][j]=='A') a = 1;
                else if(arr[i][j]=='B') b = 1;
                else if(arr[i][j]=='C') c = 1;

            }
            if(a==0) puts("A");
            else if(b==0) puts("B");
            else if(c==0) puts("C");


        }






    }





}
