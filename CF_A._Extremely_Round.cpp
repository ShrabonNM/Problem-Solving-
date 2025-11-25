#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt = 0;
        for(int i = 0 ; i<9 ;i++){
           long long int num = i ;
            while(num<=n){
                cnt++;
                num*=10;
            }
        }


            cout<<cnt<<endl;



        }

        return 0;

    }
