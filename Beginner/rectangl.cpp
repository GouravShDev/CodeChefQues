// Problem Code : RECTANGL
// url : https://www.codechef.com/problems/RECTANGL

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc;
    int side[4];
    cin>>tc;
    while(tc--){
        for (int i = 0; i < 4; i++)
        {
            cin>>side[i];
        }
        int flag1 = 0,flag2 = 0;
        int a = side[0],b = 0;
        for (int i = 1; i < 4; i++)
        {
            if(a == side[i]){
                flag1 =1;
            }else{
                if(b){
                    if(b == side[i]){
                        flag2 = 1;
                    }
                }else{
                    b = side[i];
                }
            }
        }
        if(side[0] == side[1] && side[1] == side[2] && side[2] == side[3]){
            flag1 = flag2 = 1;
        }
        if(flag1 && flag2){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}