// Problem Code : CONFLIP
// url : https://www.codechef.com/problems/CONFLIP

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc,g,n,i,q,coins;
    cin>>tc;
    while(tc--){
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            // Showing head
            if(i == 1){
                if(q == 1){
                    coins = n / 2;
                }else{
                    if(n%2 != 0)
                        coins = (n / 2) + 1;
                    else{
                        coins = n/2;
                    }
                }
            }else{
                // Tails 
                if(q == 1){
                    if(n%2 != 0)
                        coins = (n / 2) + 1;
                    else{
                        coins = n/2;
                    }
                }else{
                    coins = n / 2;
                }
            }
            cout<<coins<<endl;
        }

    }
    return 0;
}