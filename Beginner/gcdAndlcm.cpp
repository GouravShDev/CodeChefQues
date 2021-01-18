// Problem Code : FLOW016
// url : https://www.codechef.com/problems/FLOW016


#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


int gcd(ll num1,ll num2){
    if(num1 == 0){
        return num2;
    }else if(num2 == 0){
        return num1;
    }else{
        return gcd(num2, num1 % num2);
    }
}

int main(){
    ll a, b, tc;
    cin>>tc;
    while (tc--)
    {
        cin>>a>>b;
        int hcf = gcd(a,b);
        cout<<hcf<<" "<<(a*b)/hcf<<endl;
    }
    
    return 0;
}