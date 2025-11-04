#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    char s[n+1];
    scanf("%s",s);

    int found =1;



    for (int i = 0; i < n - 1; i++) {
        if ((s[i]=='M' && s[i+1]=='M') || (s[i]=='F' && s[i+1]=='F')) {
            found = 0;
            break;
        }
    }

    if (found)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
