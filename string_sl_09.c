#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    fgets(str ,  sizeof(str) , stdin);
    char ch ;
    scanf("%c",&ch);
    int cnt = 0 ;
    for(int i = 0 ; str[i]!='\0' ; i++){
         if(str[i]==ch) cnt++;
        if(str[i]=='\n')  break;


    }
    printf("%d\n",cnt);

    return 0;
}
