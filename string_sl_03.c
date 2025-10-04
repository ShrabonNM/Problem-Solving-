#include<stdio.h>
#include<string.h>

int main()
{

    char str[1000];
    fgets(str, 1000, stdin);
    int size = 0;

    for(int i= 0 ; str[i]!='\0'; i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u'){


        size ++;
    }
    }
   printf("%d\n",size);









return 0 ;

}
