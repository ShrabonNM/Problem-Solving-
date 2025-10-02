#include<stdio.h>
void printString(char arr[]);

int main(){
  char first_name[] = "Noor Mohammed";
  char last_naem[] = "Shrabon";
  printString(first_name);
  printString(last_naem);


  return 0;


}
void printString(char arr[]){
     for(int i = 0 ; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
     }
     printf("\n");

}
