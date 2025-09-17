#include<stdio.h>
int main()
{
    int n = 3;
    int arr[3][3]={
    {2,3,4},
    {11 ,23,44},
    {11,45,88}
    };
  printf("Major diagonal  :  ");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == j) {
            printf("%d ", arr[i][j]);
        }
    }
}
printf("\n Minor diagonal :  ");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i + j == n - 1) {   // condition for minor diagonal
            printf("%d ", arr[i][j]);
        }
    }
}












    return 0;
}
