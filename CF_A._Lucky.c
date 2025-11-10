#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

        char s[6];
        scanf("%s",s);

        int sum_1 = 0 ;
        int sum_2 = 0 ;

        for(int i = 0 ; i<3 ; i++){
            sum_1+=s[i]-'0';
        }
        for(int i = 3 ; i<6 ;i++){
            sum_2+=s[i]-'0';
        }


        if(sum_1==sum_2) printf("YES\n");
        else printf("NO\n");




    }




    return 0;
}
