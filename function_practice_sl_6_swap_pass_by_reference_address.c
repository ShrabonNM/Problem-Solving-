#include<stdio.h>
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Swap value in function : a= %d , b = %d\n",*x ,*y);

    return ;
}

int main(){
  int a , b ;
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("Swap value in main : a= %d , b = %d",a,b);

  return 0 ;
}
