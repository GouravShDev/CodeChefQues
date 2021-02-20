// Problem Code : MANYSUMS
// url : https://www.codechef.com/problems/MANYSUMS

// UNSOLVED 
#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int nCr(int x){
    return (x*(x-1))/2;
}

int main(){
    sync_off;
    int tc,
    ll a,b,dist;
    cin>>tc;
    while (tc--)
    {
        cin>>a>>b;
        if(a==b){
            cout<<1<<endl;
        }else{
            dist = 1 + (b - a);  
            cout<<nCr(dist)+dist<<endl;
        }
    }
    
    return 0;
}