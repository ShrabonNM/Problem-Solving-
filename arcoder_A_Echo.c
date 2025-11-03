#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char c[51];
    scanf("%s",c);

    char d[2*n+1];
    int i = 0  , j = 0 ;
    while(i!=n){
        d[j++] = c[i];
        d[j++] = c[i];
        i++;
    }
    d[j] = '\0';

    printf("%s",d);





    return 0;
}
