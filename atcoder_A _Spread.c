#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);

    for(int i = 0 ; i<len;i++){
        printf("%c",str[i]);
        if(i<len-1){
            printf(" ");
        }
    }
    printf("\n");



    return 0;
}
