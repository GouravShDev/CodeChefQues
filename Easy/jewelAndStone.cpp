// Problem Code : STONES
// url : https://www.codechef.com/problems/STONES

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, jewels;
    string jewelString, stoneString;
    cin>>tc;
    while(tc--){
        cin>>jewelString>>stoneString;
        jewels = 0;
        for(int i = 0; i<stoneString.length(); i++){
            for (int j = 0; j < jewelString.length(); j++)
            {
                if(stoneString[i] == jewelString[j]){
                    jewels++;
                    break;
                }
            }
            
        }
        cout<<jewels<<endl;
    }
    return 0;
}