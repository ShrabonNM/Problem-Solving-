#include<stdio.h>
int max(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max ;

}



int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int res = max(arr, n);
    printf("%d\n",res);

    return 1;

}

