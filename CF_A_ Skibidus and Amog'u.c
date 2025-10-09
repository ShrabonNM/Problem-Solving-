#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){

    getchar();
    char str[100];
    scanf("%s",str);

    int len = strlen(str);

    for(int i = len-1; i>0 ;i--){
        if(str[i]=='s' && str[i-1]=='u'){
            str[i-1] ='i';
            for(int j = 0 ; j<len ;j++){
                str[i]=str[i+1];
            }
            str[len-1]='\0';

            break;
        }
        str[len-1]='\0';

    }
    puts(str);






    }

    return 0;
}
