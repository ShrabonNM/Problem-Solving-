#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n , k ;
        scanf("%d %d",&n,&k);

        char s[n+1];
        scanf("%s",s);
        int cnt = 0 ;

        for(int i = 0 ; i<n ; i++){
            if(s[i]=='B'){
               cnt++;

               i = i+k-1;
            }

        }

        printf("%d\n",cnt);



    }




    return 0;
}
