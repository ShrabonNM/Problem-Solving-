#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    int A=0;
    int T=0;

    for(int i = 0 ; i<n ; i++){
        if(s[i]=='A'){
            A++;
        }
        if(s[i]=='T'){
            T++;
        }
    }

    if(A>T) printf("A\n");
    else if(A<T) printf("T\n");
    else if(A==T) {
        if(s[n-1]=='A')printf("T\n");
        else if(s[n-1]=='T') printf("A\n");
    }


    return 0;
}
