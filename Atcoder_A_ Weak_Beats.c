#include<stdio.h>

int main()
{
    char s[17];
    scanf("%16s",s);
    int found  = 0;
    for(int i = 0 ; s[i]!='\0' ; i++){
        if(i%2==1 && s[i]=='1'){
            found = 1;
            break;

        }


    }
    if(found) printf("NO\n");
    else printf("YES\n");


    return 0;
}
