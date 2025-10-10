#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char str[4];
        scanf("%s", str);

        char str2[4], str3[4],str1[4];
        strcpy(str1,str);
        strcpy(str2, str);
        strcpy(str3, str);
        int temp1 = str1[0];
        str1[0] = str[2];
        str1[2] = temp1;

        char temp2 = str2[0];
        str2[0] = str2[1];
        str2[1] = temp2;
        char temp3 = str3[1];
        str3[1] = str3[2];
        str3[2] = temp3;

        if(strcmp("abc",str)==0){
            printf("YES\n");
        }
        else if ((strcmp("abc", str2) == 0) || (strcmp("abc", str3) == 0) ||(strcmp("abc",str1)==0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
