#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

         getchar();
         char str[4];
         scanf("%s",str);
         int len = strlen(str);
         int flag = 0;

     for(int i = 0 ; i<len ;i++){
        if((str[0]=='Y' || str[0]=='y')&&(str[1]=='E'||str[1]=='e')&&(str[2]=='s'||str[2]=='S')){
               flag = 1;
            }
     }



        if(flag) printf("YES\n");
        else printf("NO\n");



    }
    return 0;
}
