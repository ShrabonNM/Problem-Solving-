#include<stdio.h>
#include<string.h>


int main()


{
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);

    for(int i = 0 ; i<26; i++){

        char c = 'a' + i;
        int ans = 0 ;

        for(int j = 0 ; j<len ; j++){
            if(s[j]==c) ans++;
        }

        if(ans>0){
            printf("%c : %d\n",c,ans);
        }

    }



    return 0;
}
