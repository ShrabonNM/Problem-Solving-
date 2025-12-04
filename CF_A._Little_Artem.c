#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n , m;
        scanf("%d %d",&n,&m);
        char c[n+2][m+2];
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                c[i][j]='B';
            }
        }
         c[0][0]='W';

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                printf("%c",c[i][j]);
            }
            printf("\n");

        }




    }

    return 0;
}
