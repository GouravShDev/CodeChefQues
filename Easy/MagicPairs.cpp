// Problem Code : ALEXNUMB
// url : https://www.codechef.com/problems/ALEXNUMB

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

ll nCr(ll n,ll r){
    ll p = 1;
    for (int i = 0; i < r; i++,n--)
    {
        p = p * n;
    }
    return p/r;
    
}

int main(){
  sync_off;
  int tc,n;
  cin >>tc;
  while(tc--){
      cin>>n;
      int num[n];
      for (int i = 0; i < n; i++)
      {
          cin>>num[i];
      }
      cout<<nCr(n,2)<<endl;
  }
  return 0;
}