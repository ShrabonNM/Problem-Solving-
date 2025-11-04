#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[101] , t[101];

    scanf("%s%s",s,t);
    int found =  1;
    for(int i = 0 ; i<n ; i++){
        if(s[i]!=t[i]){
           if(!(s[i]=='1' && t[i]=='l') && !(s[i]=='l' && t[i]=='1') && !(s[i]=='0' && t[i]=='o') && !(s[i]=='o' && t[i]=='0')) {
                found  = 0;
                break;
            }
        }
    }
    if(found) printf("YES\n");
    else printf("NO\n");


    return 0;
}
