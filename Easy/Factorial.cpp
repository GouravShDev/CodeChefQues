// Problem Code : FCTRL
// url : https://www.codechef.com/problems/FCTRL

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);

int main(){
  sync_off;
  int tc,n,zeros;
  cin>>tc;
  while(tc--){
      cin>>n;
      zeros = 0;
      int i = 5;
      while(n/i){
          zeros += n/i;
          i*=5;
      }
      cout<<zeros<<endl;
  }
  return 0;
}