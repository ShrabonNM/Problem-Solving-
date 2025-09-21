#include<stdio.h>
int main ()
{
    int a, b ;
    scanf("%d %d",&a,&b);
    int arr[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
   int flag  = 0;
    for(int i = 0 ; i<3 ; i++)
    {

            if(a<b && a==arr[i] && b==arr[i])
            {
                flag = 1 ;
                break ;

        }
    }
    if(flag == 1) printf("Yes\n");
    else printf("No\n");
    return 0 ;
/*
    if(a<b && a>=1 && a<=3 && b>=1 && b<=3) printf("Yes\n");
    else if (a<b && a>=4 && a<=6 && b>=4 && b<=6) printf("Yes\n");
    else if (a<b && a>=7 && a<=9 && b>=7 && b<=9) printf("Yes\n");
    else printf("No\n");*/
}
