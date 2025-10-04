#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    fgets(str , 10000 ,stdin);

    int size = 0;
    for(int i = 0 ; str[i]!='\0' ; i++){
       if(str[i]=='\n') break ;
       if(str[i]==' ') size++;
    }
    printf("%d\n",size+1);







    return 0;
}
