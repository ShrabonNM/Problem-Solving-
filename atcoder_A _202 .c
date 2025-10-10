#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);

    str[len-1]='4';
    puts(str);





    return 0;
}
