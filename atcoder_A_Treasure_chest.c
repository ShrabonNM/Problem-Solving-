#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int cnt  = 0 , found = 0 ;
    for(int i = 0 ; i<n ; i++){
        if(s[i]=='|'){
            cnt++;
        }
        if(cnt==1){
            if(s[i]=='*'){
                found = 1;
            }
        }
    }
    if(found) printf("in\n");
    else printf("out\n");


    return 0;
}
