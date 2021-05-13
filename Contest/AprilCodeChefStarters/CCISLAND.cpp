// Problem Code : CCISLAND
// url : https://www.codechef.com/problems/CCISLAND

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int main(){
    sync_off;
    int tc, foodSupply,waterSupply,foodSupplyR,waterSupplyR,days;

    cin>>tc;

    while(tc--){
        cin>>foodSupply>>waterSupply>>foodSupplyR>>waterSupplyR>>days;
        if(foodSupply >= (foodSupplyR*days) && waterSupply >= (waterSupplyR*days)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}