// Problem Code : CYBV
// url : https://www.codechef.com/problems/CYBV

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int

int main(){
  sync_off;
  int tc;
  ll n,k;
  cin>>tc;
  while(tc--){
      cin>>n>>k;
      cout<<k/n<<endl;
  }
  return 0;
}