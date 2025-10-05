#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    fgets(str , sizeof(str) , stdin);
    int len = strlen(str);
    int flag = 1;
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }


    for(int i = 0 ; i<len/2 ;i++ ){
        if(str[i]!=str[len-i-1]){
            flag = 0 ;
        }
    }


if(flag) printf("YES\n");
else printf("NO\n");
return 0;
}
