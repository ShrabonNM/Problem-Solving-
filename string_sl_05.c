#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str , 1000 , stdin);
    int size = 0 ;
    char rvs[1000];
    for(int i = 0 ; str[i]!='\0' ; i++){
        if(str[i]=='\n') break ;
        size++;
    }
    int j = 0;
    for(int i = size ; str[i]!='\0' ; i-- ,j++){
        rvs[j] = str[i];
    }
    rvs[j]='\0';

    puts(rvs);





    return 0;
}
