// Problem Code : DIVIDING
// url : https://www.codechef.com/problems/DIVIDING

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  ll n,sum = 0;
  cin>>n;
  ll c[n];
  for (int i = 0; i < n; i++)
  {
      cin>>c[i];
      sum += c[i];
  }
  ll m = (n * (n+1))/2;
  if(m == sum){
      cout<<"YES\n";
  }else{
      cout<<"NO\n";
  }
  return 0;
}