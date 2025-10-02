#include<stdio.h>
#include<string.h>

int length(char arr[]);
int main()
{
    char str[10000];
    fgets(str, 10000, stdin);
    printf("The total length of inputed string is : %d\n",length(str));

    return 0;
}
int length(char arr[])
{

    int count = 0 ;
    for(int i = 0 ; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count ;
}



