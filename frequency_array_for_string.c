#include <stdio.h>
#include <string.h>

int main() {
   char str[1000];
    scanf("%s", str);

    int fr[10] = {0}; // only for digits 0-9

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            fr[str[i]-'0']++;  // convert char to digit index
        }
    }

    for (int i = 0; i < 60; i++) {
        printf("%d ", fr[i]);
    } 

/*  char arr[10];
   for(int i = 0 ; i<10;i++){
       scanf(" %c",&arr[i]);
      
  }
  
  for(int i = 0 ; i<10 ;i++){
      printf("%d ",arr[i]);
  } */  
  
    return 0;
}


