#include <stdio.h>
#include<string.h>


int main() {
  
    char str1[1000];
    puts("Write something : ");
    scanf("%s",str1);
    int  size = 0;
    int i = 0 ;
    while(str1[i]!='\0'){
        size++;
        i++;
    }
    
    for(int j = 0 , k = size - 1 ; j<=k ; j++,k-- ){
        char temp = str1[j] ;
        str1[j] = str1[k];
        str1[k] = temp ;
    }
    puts("Revrse string is : ");
    puts(str1);

    return 0;
}
