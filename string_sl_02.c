#include<stdio.h>
#include<string.h>

int main(){

char str1[10000];
char str2[10000];
fgets(str1 , 10000 ,stdin);
fgets(str2 ,  10000, stdin);
char str[10000];
int size1 = 0 ;
for(int i = 0 ; str1[i]!='\0'; i++){
     if(str1[i]=='\n')break;
     size1++;
     str[i] = str1[i];
}
int j = size1;
for(int i = 0 ; str2[i]!='\0' ; i++ ,j++){
      if(str2[i] =='\n') break ;
      str[j] = str2[i];

}
str[j]='\0';
puts(str);



return 0;
}
