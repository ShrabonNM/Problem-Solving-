#include<stdio.h>
#include<string.h>
int main()
{


    char s[11];
    scanf("%s",s);
    int n = strlen(s);

    for(int i =  0  ; i<n ; i++){
        if(s[i]=='0'){
            s[i]='1';
        }
        else if(s[i]=='1'){
            s[i]='0';
        }
    }

    printf("%s\n",s);


    return 0;
}
