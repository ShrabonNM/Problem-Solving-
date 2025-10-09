#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    getchar();

    while (T--)
    {
        char str[100];
        scanf("%s",str);

        int l en = strlen(str);

        if (str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }

        int flag = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            printf("1\n");
        else
            printf("%d\n", len);
    }

    return 0;
}
