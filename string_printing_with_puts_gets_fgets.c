#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str, 1000 ,stdin);
    puts(str);

   char* canchange = "Hello, This is .....";
   puts(canchange);
   canchange = "The World!!!";
   puts(canchange);

    return 0;
}
