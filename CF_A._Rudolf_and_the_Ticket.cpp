#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int b , c , k;
        cin>>b>>c>>k;
        int arr_b[b];
        int arr_c[c];
        for(int i = 0 ; i<b ;i++){
            cin>>arr_b[i];
        }
        for(int i = 0 ; i<c ;i++){
            cin>>arr_c[i];
        }

        int cnt = 0;
        for(int i = 0 ; i<b ;i++){
            for(int j = 0 ; j<c ; j++){
                if(arr_b[i]+arr_c[j]<=k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;


    }
    return 0;
}
