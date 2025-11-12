#include<stdio.h>
#include<string.h>

int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      scanf("%d",&n);
      char s[n+1];
      scanf("%s",s);

      int fr[26];

      for(int i = 0 ; i<26 ; i++){
         fr[i]=0;
      }

      for(int i = 0 ; i<n ; i++){
         fr[s[i]-65]++;
      }


      int ans = 0 ;

      for(int i = 0 ; i<26; i++){
           if(fr[i ]!= 0){
             ans+=fr[i]+1;
           }
      }
      printf("%d\n",ans);


    }




    return 0;
}
