// Problem Code : NUMGAME2
// url : https://www.codechef.com/problems/NUMGAME2

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


bool isPrime(ll num){
    if(num == 2 || num == 3){
        return true;
    }
    for(ll i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int check(ll num){
    if(num <= 1){
        return 0;
    }else if(num == 2){
        return 1;
    }
    for(ll i = num-1; i >= 1; i--){
        if(isPrime(i)){
            return !check(num-i);
        }
    }
    return 0;
}


int main(){
    sync_off;
    int tc;
    ll n;
    cin>>tc;
    while(tc--){
        cin>>n;
        if(n%4!= 1){
            cout<<"BOB\n";
        }else{
            cout<<"ALICE\n";
        }
    }
    return 0;
}