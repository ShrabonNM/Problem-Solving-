#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str, 1000,stdin);

    int size = 0;
    for(int i = 0 ; str[i]!='\0' ; i++)
    {
        if(str[i]=='\n') break;
        size++;
    }
    printf("%d\n",size);




    return 0;
}
